/* ************************************************************************** */
/*                                                                            */
/*                                                    _.._  .           .     */
/*   ft_tolower.c                                   .' .-'`        *          */
/*                                                 /  /       +        *      */
/*   By: ldel-val <ldel-val@student.42madrid.com>  |  |           *           */
/*                                                 \  '.___.;       +         */
/*   Created: 2024/10/26 15:48:11 by ldel-val       '._  _.'   .        .     */
/*   Updated: 2024/10/27 11:38:31 by ldel-val          ``                     */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"

int	ft_tolower(int c)
{
	if (c >= 'A' && c <= 'Z')
		c += 32;
	return (c);
}