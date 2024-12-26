/* ************************************************************************** */
/*                                                                            */
/*                                                    _.._  .           .     */
/*   ft_get_next_line.c                             .' .-'`        *          */
/*                                                 /  /       +        *      */
/*   By: ldel-val <ldel-val@student.42madrid.c     |  |           *           */
/*                                                 \  '.___.;       +         */
/*   Created: 2024/10/17 16:12:55 by ldel-val       '._  _.'   .        .     */
/*   Updated: 2024/11/16 18:30:09 by ldel-val          ``                     */
/*                                                                            */
/* ************************************************************************** */

#include "../../libft.h"

long	ft_find_lbreak(char *string)
{
	long	i;

	i = 0;
	while (string[i] != '\n' && string[i] != '\0')
		i++;
	return (i);
}

ssize_t	ft_read(int fd, char *buffer, size_t count)
{
	ssize_t	read_bytes;

	read_bytes = read(fd, buffer, count);
	buffer[read_bytes] = '\0';
	return (read_bytes);
}

char	*get_next_line(int fd)
{
	static char	*buf[MAX_FD];
	char		*string;
	ssize_t		read_bytes;

	string = NULL;
	if (fd < 0 || BUFFER_SIZE <= 0)
		return (NULL);
	if (!buf[fd])
		buf[fd] = ft_calloc(BUFFER_SIZE + 1, sizeof(char));
	read_bytes = 1;
	if (buf[fd] && buf[fd][ft_find_lbreak(buf[fd]) + 1])
		ft_strlcpy(buf[fd], &buf[fd][ft_find_lbreak(buf[fd]) + 1], BUFFER_SIZE);
	else if (buf[fd])
		read_bytes = ft_read(fd, buf[fd], BUFFER_SIZE);
	while (read_bytes > 0 && buf[fd])
	{
		string = ft_strappend(string, buf[fd], ft_find_lbreak(buf[fd]) + 1);
		if (buf[fd][ft_find_lbreak(buf[fd])] == '\n')
			return (string);
		read_bytes = ft_read(fd, buf[fd], BUFFER_SIZE);
	}
	if (buf[fd])
		free(buf[fd]);
	buf[fd] = NULL;
	return (string);
}
