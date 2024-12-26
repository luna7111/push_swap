/* ************************************************************************** */
/*                                                                            */
/*                                                    _.._  .           .     */
/*   ft_memcmp.c                                    .' .-'`        *          */
/*                                                 /  /       +        *      */
/*   By: ldel-val <ldel-val@student.42madrid.com>  |  |           *           */
/*                                                 \  '.___.;       +         */
/*   Created: 2024/10/26 15:42:41 by ldel-val       '._  _.'   .        .     */
/*   Updated: 2024/10/27 11:39:49 by ldel-val          ``                     */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	unsigned char	*casted_string1;
	unsigned char	*casted_string2;

	casted_string1 = (unsigned char *)s1;
	casted_string2 = (unsigned char *)s2;
	while (n)
	{
		if (*casted_string1 != *casted_string2)
			return (*casted_string1 - *casted_string2);
		casted_string1 ++;
		casted_string2 ++;
		n--;
	}
	return (0);
}
