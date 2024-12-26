/* ************************************************************************** */
/*                                                                            */
/*                                                    _.._  .           .     */
/*   ft_itob.c                                      .' .-'`        *          */
/*                                                 /  /       +        *      */
/*   By: ldel-val <ldel-val@student.42madrid.com>  |  |           *           */
/*                                                 \  '.___.;       +         */
/*   Created: 2024/10/26 16:17:48 by ldel-val       '._  _.'   .        .     */
/*   Updated: 2024/10/27 11:39:43 by ldel-val          ``                     */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"

int	ft_itob(int nb)
{
	int	byte_count;

	byte_count = 0;
	if (nb == 0)
		return (1);
	if (nb <= 0)
	{
		byte_count ++;
		nb *= -1;
	}
	while (nb)
	{
		byte_count ++;
		nb /= 10;
	}
	return (byte_count);
}
//Returns the number of bytes an int would have in ascii
