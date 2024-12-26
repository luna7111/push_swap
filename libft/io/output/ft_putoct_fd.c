/* ************************************************************************** */
/*                                                                            */
/*                                                    _.._  .           .     */
/*   ft_putoct_fd.c                                 .' .-'`        *          */
/*                                                 /  /       +        *      */
/*   By: ldel-val <ldel-val@student.42madrid.c     |  |           *           */
/*                                                 \  '.___.;       +         */
/*   Created: 2024/10/28 17:00:39 by ldel-val       '._  _.'   .        .     */
/*   Updated: 2024/11/16 16:44:40 by ldel-val          ``                     */
/*                                                                            */
/* ************************************************************************** */

#include "../../libft.h"

int	ft_putoct_fd(int n, int fd)
{
	int	printed_bytes;

	printed_bytes = 0;
	if (n >= 8)
		printed_bytes += ft_putoct_fd(n / 8, fd);
	n = n % 8;
	printed_bytes += ft_putchar_fd(n + '0', fd);
	return (printed_bytes);
}
