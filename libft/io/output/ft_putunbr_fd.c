/* ************************************************************************** */
/*                                                                            */
/*                                                    _.._  .           .     */
/*   ft_putunbr_fd.c                                .' .-'`        *          */
/*                                                 /  /       +        *      */
/*   By: ldel-val <ldel-val@student.42madrid.com>  |  |           *           */
/*                                                 \  '.___.;       +         */
/*   Created: 2024/10/26 15:43:30 by ldel-val       '._  _.'   .        .     */
/*   Updated: 2024/11/16 16:45:15 by ldel-val          ``                     */
/*                                                                            */
/* ************************************************************************** */

#include "../../libft.h"

int	ft_putunbr_fd(unsigned int n, int fd)
{
	int	printed_bytes;
	int	digit_char;

	printed_bytes = 0;
	if (n >= 10)
		printed_bytes += ft_putnbr_fd(n / 10, fd);
	digit_char = (n % 10) + '0';
	printed_bytes += write(fd, &digit_char, 1);
	return (printed_bytes);
}
