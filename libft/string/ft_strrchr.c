/* ************************************************************************** */
/*                                                                            */
/*                                                    _.._  .           .     */
/*   ft_strrchr.c                                   .' .-'`        *          */
/*                                                 /  /       +        *      */
/*   By: ldel-val <ldel-val@student.42madrid.com>  |  |           *           */
/*                                                 \  '.___.;       +         */
/*   Created: 2024/10/26 15:48:39 by ldel-val       '._  _.'   .        .     */
/*   Updated: 2024/10/27 11:39:55 by ldel-val          ``                     */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"

char	*ft_strrchr(const char *s, int c)
{
	unsigned char	*match;

	match = (unsigned char *)s;
	match += ft_strlen(s);
	while (match >= (unsigned char *)s)
	{
		if (*match == (unsigned char)c)
			return ((char *)match);
		match --;
	}
	return (NULL);
}
