/* ************************************************************************** */
/*                                                                            */
/*                                                    _.._  .           .     */
/*   node_access.c                                  .' .-'`        *          */
/*                                                 /  /       +        *      */
/*   By: ldel-val <ldel-val@student.42madrid.com>  |  |           *           */
/*                                                 \  '.___.;       +         */
/*   Created: 2025/02/11 19:22:53 by ldel-val       '._  _.'   .        .     */
/*   Updated: 2025/02/11 19:24:17 by ldel-val          ``                     */
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
