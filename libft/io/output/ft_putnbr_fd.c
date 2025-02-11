/* ************************************************************************** */
/*                                                                            */
/*                                                    _.._  .           .     */
/*   ft_putnbr_fd.c                                 .' .-'`        *          */
/*                                                 /  /       +        *      */
/*   By: ldel-val <ldel-val@student.42madrid.com>  |  |           *           */
/*                                                 \  '.___.;       +         */
/*   Created: 2024/10/26 15:43:30 by ldel-val       '._  _.'   .        .     */
/*   Updated: 2024/11/16 16:44:31 by ldel-val          ``                     */
/*                                                                            */
/* ************************************************************************** */

#include "../../libft.h"

int	ft_putnbr_fd(int n, int fd)
{
	int	printed_bytes;
	int	digit_char;

	printed_bytes = 0;
	if (n == -2147483648)
	{
		printed_bytes += write(fd, "-2147483648", 11);
		return (printed_bytes);
	}
	if (n < 0)
	{
		printed_bytes += write(fd, "-", 1);
		n *= -1;
	}
	if (n >= 10)
		printed_bytes += ft_putnbr_fd(n / 10, fd);
	digit_char = (n % 10) + '0';
	printed_bytes += write(fd, &digit_char, 1);
	return (printed_bytes);
}
