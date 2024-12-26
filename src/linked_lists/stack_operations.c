/* ************************************************************************** */
/*                                                                            */
/*                                                    _.._  .           .     */
/*   swap.c                                         .' .-'`        *          */
/*                                                 /  /       +        *      */
/*   By: ldel-val <ldel-val@student.42madrid.com>  |  |           *           */
/*                                                 \  '.___.;       +         */
/*   Created: 2024/12/25 23:56:46 by ldel-val       '._  _.'   .        .     */
/*   Updated: 2024/12/26 11:21:44 by ldel-val          ``                     */
/*                                                                            */
/* ************************************************************************** */

#include <push_swap.h>

void	stack_swap(t_stack **stack)
{
	int	buffer;

	if (!stack || !*stack || !(*stack)->next)
		return ;
	buffer = *stack->nb;
	*stack->nb = *stack->next->nb;
	*stack->next->nb = buffer;
}

void	stack_push(t_stack **pusher, t_stack **pushee)
{
	node_add_front(pushee, *pusher);
	remove_node(pusher);
}

void	stack_rotate(t_stack **stack)
{
	t_stack buffer;

	if (!stack || !*stack || !*stack->next)
		return ;
	last_node(*stack)->next = *stack;
	buffer = *stack;
	*stack = stack->next;
	buffer->next = NULL; 
}

void	stack_reverse_rotate(t_stack **stack)
{
	t_stack	*buffer;

	if (!stack || !*stack || !*stack->next)
		return ;
	buffer = last_node(*stack);
	next_to_last_node(*stack)->next = NULL;
	buffer->next = *stack:
}
