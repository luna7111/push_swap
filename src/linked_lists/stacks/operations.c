/* ************************************************************************** */
/*                                                                            */
/*                                                    _.._  .           .     */
/*   operations.c                                   .' .-'`        *          */
/*                                                 /  /       +        *      */
/*   By: ldel-val <ldel-val@student.42madrid.com>  |  |           *           */
/*                                                 \  '.___.;       +         */
/*   Created: 2025/02/17 15:08:54 by ldel-val       '._  _.'   .        .     */
/*   Updated: 2025/02/18 18:37:16 by ldel-val          ``                     */
/*                                                                            */
/* ************************************************************************** */

#include <push_swap.h>

void	stack_swap(t_stack **stack)
{
	int	buffer;

	if (!(*stack)->nx)
		return ;
	buffer = (*stack)->ind;
	(*stack)->ind = (*stack)->nx->ind;
	(*stack)->nx->ind = buffer;
	buffer = (*stack)->nb;
	(*stack)->nb = (*stack)->nx->nb;
	(*stack)->nx->nb = buffer;
}

void	stack_push(t_stack **pusher, t_stack **pushee)
{
	t_stack	*buffer;

	if (*pusher == NULL)
		return ;
	buffer = (*pusher);
	*pusher = (*pusher)->nx;
	if (*pusher)
		(*pusher)->pr = NULL;
	stack_add_front(pushee, buffer);
}

void	stack_rotate(t_stack **stack)
{
	t_stack	*buffer;

	if (!stack || !*stack || !(*stack)->nx)
		return ;
	buffer = *stack;
	*stack = (*stack)->nx;
	(*stack)->pr = NULL;
	buffer->pr = last_node(*stack);
	buffer->nx = NULL;
	last_node(*stack)->nx = buffer;
}

void	stack_reverse_rotate(t_stack **stack)
{
	t_stack	*buffer;

	if (!stack || !*stack || !(*stack)->nx)
		return ;
	buffer = last_node(*stack);
	buffer->pr->nx = NULL;
	buffer->nx = *stack;
	buffer->pr = NULL;
	(*stack)->pr = buffer;
	*stack = buffer;
}
