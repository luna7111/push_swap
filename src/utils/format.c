/* ************************************************************************** */
/*                                                                            */
/*                                                    _.._  .           .     */
/*   format.c                                       .' .-'`        *          */
/*                                                 /  /       +        *      */
/*   By: ldel-val <ldel-val@student.42madrid.com>  |  |           *           */
/*                                                 \  '.___.;       +         */
/*   Created: 2024/12/26 21:25:20 by ldel-val       '._  _.'   .        .     */
/*   Updated: 2024/12/26 22:05:01 by ldel-val          ``                     */
/*                                                                            */
/* ************************************************************************** */

#include <push_swap.h>

int	str_is_int(char *str)
{
	if (ft_strncmp(ft_itoa(ft_atoi(str)), str, 12))
		return (0);
	return (1);
}
