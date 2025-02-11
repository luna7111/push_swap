/* ************************************************************************** */
/*                                                                            */
/*                                                    _.._  .           .     */
/*   ft_memmove.c                                   .' .-'`        *          */
/*                                                 /  /       +        *      */
/*   By: ldel-val <ldel-val@student.42madrid.com>  |  |           *           */
/*                                                 \  '.___.;       +         */
/*   Created: 2024/10/26 15:42:57 by ldel-val       '._  _.'   .        .     */
/*   Updated: 2024/10/27 11:39:49 by ldel-val          ``                     */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	size_t	i;

	if (n == 0)
		return (dest);
	if (dest < src)
	{
		i = 0;
		while (n--)
		{
			((char *)dest)[i] = ((char *)src)[i];
			i ++;
		}
	}
	else if (dest > src)
		while (n--)
			((char *)dest)[n] = ((char *)src)[n];
	return (dest);
}
