/* ************************************************************************** */
/*                                                                            */
/*                                                    _.._  .           .     */
/*   add_remove.c                                   .' .-'`        *          */
/*                                                 /  /       +        *      */
/*   By: ldel-val <ldel-val@student.42madrid.com>  |  |           *           */
/*                                                 \  '.___.;       +         */
/*   Created: 2025/02/11 19:17:09 by ldel-val       '._  _.'   .        .     */
/*   Updated: 2025/02/11 19:20:50 by ldel-val          ``                     */
/*                                                                            */
/* ************************************************************************** */

#include <push_swap.h>

void	stack_add_front(t_stack **stack, t_stack *node)
{
	if (node)
	{
		node->next = *stack;
		*stack = node;
	}
}

void	stack_add_back(t_stack **stack, t_stack *node)
{
	if (!list)
		stack_add_front(stack, node);
	if (node)
		last_node(*stack)->next = node;
}
