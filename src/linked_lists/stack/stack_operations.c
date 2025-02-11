/* ************************************************************************** */
/*                                                                            */
/*                                                    _.._  .           .     */
/*   stack_operations.c                             .' .-'`        *          */
/*                                                 /  /       +        *      */
/*   By: ldel-val <ldel-val@student.42madrid.com>  |  |           *           */
/*                                                 \  '.___.;       +         */
/*   Created: 2025/02/11 19:59:08 by ldel-val       '._  _.'   .        .     */
/*   Updated: 2025/02/11 20:09:04 by ldel-val          ``                     */
/*                                                                            */
/* ************************************************************************** */

#include <push_swap.h>

void	stack_swap(t_stack **stack)
{
	int	buffer;

	if (!stack || !*stack || !(*stack)->next)
		return ;
	buffer = (*stack)->index;
	(*stack)->index = (*stack)->next->index;
	(*stack)->next->index = buffer;
	buffer = (*stack)->nb;
	(*stack)->nb = (*stack)->next->nb;
	(*stack)->next->nb = buffer;
}

void	stack_push(t_stack **pusher, t_stack **pushee)
{
	t_stack	*buffer;

	buffer = *pusher;
	*pusher = (*pusher)->next;
	node_add_front(pushee, buffer);
}
