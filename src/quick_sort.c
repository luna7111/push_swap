/* ************************************************************************** */
/*                                                                            */
/*                                                    _.._  .           .     */
/*   sort.c                                         .' .-'`        *          */
/*                                                 /  /       +        *      */
/*   By: ldel-val <ldel-val@student.42madrid.com>  |  |           *           */
/*                                                 \  '.___.;       +         */
/*   Created: 2024/12/28 00:04:15 by ldel-val       '._  _.'   .        .     */
/*   Updated: 2024/12/28 12:31:14 by ldel-val          ``                     */
/*                                                                            */
/* ************************************************************************** */

#include <push_swap.h>

int	rotate_to_smaller(t_stack *stack, int pivot)
{
	int	closest_forward;
	int	closest_backward;

	closest_forward = 0;
	while (nth_node(stack, closest_forward)->nb >= pivot)
		closest_forward ++;
	closest_backward = 1;
	while (nth_node(stack, stack_size(stack) - closest_backward)->nb >= pivot)
		closest_backward ++;
	if (closest_forward <= closest_backward)
		return (1);
	return (2);
}

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
		else if (rotate_to_smaller(*sa, pivot->nb) == 1)
			o_ra(sa);
		else if (rotate_to_smaller(*sa, pivot->nb) == 2)
			o_rra(sa);
	}
	ft_printf("End\n");
}
