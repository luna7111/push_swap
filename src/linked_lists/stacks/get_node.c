/* ************************************************************************** */
/*                                                                            */
/*                                                    _.._  .           .     */
/*   get_node.c                                     .' .-'`        *          */
/*                                                 /  /       +        *      */
/*   By: ldel-val <ldel-val@student.42madrid.com>  |  |           *           */
/*                                                 \  '.___.;       +         */
/*   Created: 2025/02/17 14:43:01 by ldel-val       '._  _.'   .        .     */
/*   Updated: 2025/02/18 17:42:14 by ldel-val          ``                     */
/*                                                                            */
/* ************************************************************************** */

#include <push_swap.h>

t_stack	*last_node(t_stack *stack)
{
	if (!stack)
		return (NULL);
	while (stack->nx)
		stack = stack->nx;
	return (stack);
}

t_stack	*biggest_node(t_stack *stack)
{
	t_stack	*biggest;

	biggest = stack;
	while (stack != NULL)
	{
		if (stack->nb > biggest->nb)
			biggest = stack;
		stack = stack->nx;
	}
	return (biggest);
}

t_stack	*smallest_node(t_stack *stack)
{
	t_stack	*smallest;

	smallest = stack;
	while (stack != NULL)
	{
		if (stack->nb < smallest->nb)
			smallest = stack;
		stack = stack->nx;
	}
	return (smallest);
}
