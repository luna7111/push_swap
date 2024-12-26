/* ************************************************************************** */
/*                                                                            */
/*                                                    _.._  .           .     */
/*   ft_putptr_fd.c                                 .' .-'`        *          */
/*                                                 /  /       +        *      */
/*   By: ldel-val <ldel-val@student.42madrid.c     |  |           *           */
/*                                                 \  '.___.;       +         */
/*   Created: 2024/10/28 16:10:57 by ldel-val       '._  _.'   .        .     */
/*   Updated: 2024/11/16 16:44:48 by ldel-val          ``                     */
/*                                                                            */
/* ************************************************************************** */

#include "../../libft.h"

int	ft_putptr_fd(void *ptr, int fd)
{
	int	printed_bytes;

	if (!ptr)
		return (write(fd, "(nil)", 5));
	printed_bytes = write(fd, "0x", 2);
	printed_bytes += ft_puthex_fd((size_t)ptr, fd);
	return (printed_bytes);
}
