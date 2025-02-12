/* ************************************************************************** */
/*                                                                            */
/*                                                    _.._  .           .     */
/*   stack_operations.c                             .' .-'`        *          */
/*                                                 /  /       +        *      */
/*   By: ldel-val <ldel-val@student.42madrid.com>  |  |           *           */
/*                                                 \  '.___.;       +         */
/*   Created: 2025/02/11 19:59:08 by ldel-val       '._  _.'   .        .     */
/*   Updated: 2025/02/12 00:55:52 by ldel-val          ``                     */
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
	stack_add_front(pushee, buffer);
}

void	stack_rotate(t_stack **stack)
{
	t_stack	*buffer;

	if (!stack || !*stack || !(*stack)->next)
		return ;
	last_node(*stack)->next = *stack;
	buffer = *stack;
	*stack = (*stack)->next;
	buffer->next = NULL;
}

void	stack_reverse_rotate(t_stack **stack)
{
	t_stack	*buffer;

	if (!stack || !*stack || !(*stack)->next)
		return ;
	buffer = last_node(*stack);
	next_to_last_node(*stack)->next = NULL;
	buffer->next = *stack;
	*stack = buffer;
}
