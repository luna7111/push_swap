/* ************************************************************************** */
/*                                                                            */
/*                                                    _.._  .           .     */
/*   ft_strappend.c                                 .' .-'`        *          */
/*                                                 /  /       +        *      */
/*   By: ldel-val <ldel-val@student.42madrid.com>  |  |           *           */
/*                                                 \  '.___.;       +         */
/*   Created: 2024/11/16 17:54:22 by ldel-val       '._  _.'   .        .     */
/*   Updated: 2024/11/16 19:08:46 by ldel-val          ``                     */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"

char	*ft_strappend(char *dest, char *src, size_t nb)
{
	char	*buffer;
	size_t	dest_len;
	size_t	src_len;

	if (!dest)
		dest = ft_calloc(1, sizeof(char));
	if (!src || !nb)
		return (dest);
	dest_len = ft_strlen(dest);
	src_len = ft_strlen(src);
	if (src_len > nb)
		src_len = nb;
	buffer = malloc(sizeof(char) * (dest_len + src_len + 1));
	ft_strlcpy(buffer, dest, dest_len + 1);
	ft_strlcat(buffer, src, dest_len + src_len + 1);
	free(dest);
	return (buffer);
}
