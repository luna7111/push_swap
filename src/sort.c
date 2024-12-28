/* ************************************************************************** */
/*                                                                            */
/*                                                    _.._  .           .     */
/*   sort.c                                         .' .-'`        *          */
/*                                                 /  /       +        *      */
/*   By: ldel-val <ldel-val@student.42madrid.com>  |  |           *           */
/*                                                 \  '.___.;       +         */
/*   Created: 2024/12/28 00:04:15 by ldel-val       '._  _.'   .        .     */
/*   Updated: 2024/12/28 02:49:48 by ldel-val          ``                     */
/*                                                                            */
/* ************************************************************************** */

#include <push_swap.h>

void	sort(t_stack **sa, t_stack **sb)
{
	t_stack	*pivot;

	pivot =	median_of_three(*sa, last_node(*sa));
	while (!section_is_bigger(*sa, last_node(*sa), pivot->nb))
	{
		if ((*sa)->nb < pivot->nb)
			o_pb(sa, sb);
		else if ((*sa)->next->nb < pivot->nb)
			if (*sb && (*sb)->next && (*sb)->nb > (*sb)->next->nb)
				o_ss(sa, sb);
			else
				o_sa(sa);
		else if ()//comprobar si hay que rotar hacia adelante o hacia atrás
	}		
}
