/* ************************************************************************** */
/*                                                                            */
/*                                                    _.._  .           .     */
/*   numeric.c                                      .' .-'`        *          */
/*                                                 /  /       +        *      */
/*   By: ldel-val <ldel-val@student.42madrid.com>  |  |           *           */
/*                                                 \  '.___.;       +         */
/*   Created: 2024/12/27 11:06:48 by ldel-val       '._  _.'   .        .     */
/*   Updated: 2024/12/28 02:13:11 by ldel-val          ``                     */
/*                                                                            */
/* ************************************************************************** */

#include <push_swap.h>

t_stack	*median_of_three(t_stack *start, t_stack *end)
{
	t_stack	*middle;

	middle = nth_node(start, (stack_size(start) / 2));
	if (start->nb > middle->nb && start->nb < end->nb)
		return (start);
	if (start->nb < middle->nb && start->nb > end->nb)
		return (start);
	if (middle->nb > start->nb && middle->nb < end->nb)
		return (middle);
	if (middle->nb < start->nb && middle->nb > end->nb)
		return (middle);
	if (end->nb > start->nb && end->nb < middle->nb)
		return (end);
	if (end->nb < start->nb && end->nb > middle->nb)
		return (end);
	return (NULL);
}
