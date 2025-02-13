/* ************************************************************************** */
/*                                                                            */
/*                                                    _.._  .           .     */
/*   node_access.c                                  .' .-'`        *          */
/*                                                 /  /       +        *      */
/*   By: ldel-val <ldel-val@student.42madrid.com>  |  |           *           */
/*                                                 \  '.___.;       +         */
/*   Created: 2025/02/11 19:22:53 by ldel-val       '._  _.'   .        .     */
/*   Updated: 2025/02/12 13:09:01 by ldel-val          ``                     */
/*                                                                            */
/* ************************************************************************** */

#include <push_swap.h>

t_stack	*biggest_node(t_stack *stack)
{
	t_stack	*biggest;

	biggest = stack;
	stack = stack->next;
	while (stack != NULL)
	{
		if (stack->nb > biggest->nb)
			biggest = stack;
		stack = stack->next;
	}
	return (biggest);
}

t_stack	*smallest_node(t_stack *stack)
{
	t_stack	*smallest;

	smallest = stack;
	stack = stack->next;
	while (stack != NULL)
	{
		if (stack->nb < smallest->nb)
			smallest = stack;
		stack = stack->next;
	}
	return (smallest);
}

t_stack	*last_node(t_stack *stack)
{
	if (!stack)
		return (NULL);
	while (stack->next)
		stack = stack->next;
	return (stack);
}

t_stack	*nth_node(t_stack *node, int index)
{
	while (node && index --)
		node = node->next;
	return (node);
}

t_stack	*next_to_last_node(t_stack *node)
{
	if (!node || !node->next)
		return (NULL);
	while (node->next->next)
		node = node->next;
	return (node);
}
