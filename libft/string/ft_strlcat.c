/* ************************************************************************** */
/*                                                                            */
/*                                                    _.._  .           .     */
/*   ft_strlcat.c                                   .' .-'`        *          */
/*                                                 /  /       +        *      */
/*   By: ldel-val <ldel-val@student.42madrid.com>  |  |           *           */
/*                                                 \  '.___.;       +         */
/*   Created: 2024/10/26 15:44:32 by ldel-val       '._  _.'   .        .     */
/*   Updated: 2024/10/27 11:39:54 by ldel-val          ``                     */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t	dstlen;
	size_t	srclen;

	dstlen = ft_strlen(dst);
	srclen = ft_strlen(src);
	if (dstlen > size)
		return (srclen + size);
	dst += dstlen;
	size -= dstlen;
	while (size-- > 1 && *src)
		*dst++ = *src++;
	*dst = '\0';
	return (srclen + dstlen);
}
