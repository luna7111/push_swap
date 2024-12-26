/* ************************************************************************** */
/*                                                                            */
/*                                                    _.._  .           .     */
/*   ft_putstr_fd.c                                 .' .-'`        *          */
/*                                                 /  /       +        *      */
/*   By: ldel-val <ldel-val@student.42madrid.com>  |  |           *           */
/*                                                 \  '.___.;       +         */
/*   Created: 2024/10/26 15:43:39 by ldel-val       '._  _.'   .        .     */
/*   Updated: 2024/11/16 16:45:05 by ldel-val          ``                     */
/*                                                                            */
/* ************************************************************************** */

#include "../../libft.h"

int	ft_putstr_fd(char *s, int fd)
{
	int	printed_bytes;

	printed_bytes = 0;
	if (!s)
		return (write(fd, "(null)", 6));
	while (*s)
	{
		printed_bytes += write(fd, s, 1);
		s++;
	}
	return (printed_bytes);
}
