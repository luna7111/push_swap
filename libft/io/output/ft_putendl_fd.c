/* ************************************************************************** */
/*                                                                            */
/*                                                    _.._  .           .     */
/*   ft_putendl_fd.c                                .' .-'`        *          */
/*                                                 /  /       +        *      */
/*   By: ldel-val <ldel-val@student.42madrid.com>  |  |           *           */
/*                                                 \  '.___.;       +         */
/*   Created: 2024/10/26 15:43:20 by ldel-val       '._  _.'   .        .     */
/*   Updated: 2024/11/16 16:43:56 by ldel-val          ``                     */
/*                                                                            */
/* ************************************************************************** */

#include "../../libft.h"

int	ft_putendl_fd(char *s, int fd)
{
	int	printed_bytes;

	printed_bytes = 0;
	printed_bytes += ft_putstr_fd(s, fd);
	printed_bytes += write(fd, "\n", 1);
	return (printed_bytes);
}
