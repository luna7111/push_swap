/* ************************************************************************** */
/*                                                                            */
/*                                                    _.._  .           .     */
/*   other.c                                        .' .-'`        *          */
/*                                                 /  /       +        *      */
/*   By: ldel-val <ldel-val@student.42madrid.com>  |  |           *           */
/*                                                 \  '.___.;       +         */
/*   Created: 2025/02/11 20:13:53 by ldel-val       '._  _.'   .        .     */
/*   Updated: 2025/02/12 00:55:12 by ldel-val          ``                     */
/*                                                                            */
/* ************************************************************************** */

#include <push_swap.h>

long	stack_size(t_stack *stack)
{
	long	size;

	size = 0;
	while (stack != NULL)
	{
		size ++;
		stack = stack->next;
	}
	return (size);
}

long	node_position(t_stack *stack, t_stack *node)
{
	long	position;

	position = 0;
	while (stack->next != NULL && stack != node)
	{
		position ++;
		stack = stack->next;
	}
	return (position);
}
