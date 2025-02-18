/* ************************************************************************** */
/*                                                                            */
/*                                                    _.._  .           .     */
/*   add_remove.c                                   .' .-'`        *          */
/*                                                 /  /       +        *      */
/*   By: ldel-val <ldel-val@student.42madrid.com>  |  |           *           */
/*                                                 \  '.___.;       +         */
/*   Created: 2025/02/17 14:22:31 by ldel-val       '._  _.'   .        .     */
/*   Updated: 2025/02/17 17:18:42 by ldel-val          ``                     */
/*                                                                            */
/* ************************************************************************** */

#include <push_swap.h>

void	stack_add_front(t_stack **stack, t_stack *node)
{
	if (node)
	{
		node->nx = *stack;
		node->pr = NULL;
		*stack = node;
		if (node->nx)
			node->nx->pr = node;
	}
}

void	stack_add_back(t_stack **stack, t_stack *node)
{
	if (!*stack)
		stack_add_front(stack, node);
	else if (node)
	{
		node->pr = last_node(*stack);
		last_node(*stack)->nx = node;
		node->nx = NULL;
	}
}
