/* ************************************************************************** */
/*                                                                            */
/*                                                    _.._  .           .     */
/*   get_node.c                                     .' .-'`        *          */
/*                                                 /  /       +        *      */
/*   By: ldel-val <ldel-val@student.42madrid.com>  |  |           *           */
/*                                                 \  '.___.;       +         */
/*   Created: 2024/12/25 22:40:35 by ldel-val       '._  _.'   .        .     */
/*   Updated: 2024/12/28 00:46:37 by ldel-val          ``                     */
/*                                                                            */
/* ************************************************************************** */

#include <push_swap.h>

t_stack	*last_node(t_stack *stack)
{
	if (!stack)
		return (NULL);
	while (stack->next)
		stack = stack->next;
	return (stack);
}

t_stack *nth_node(t_stack *node, int index)
{
	while (node && index --)
		node = node->next;
	return (node);
}

t_stack *next_to_last_node(t_stack *node)
{
	if (!node || !node->next)
		return (NULL);
	while (node->next->next)
		node = node->next;
	return (node);
}
