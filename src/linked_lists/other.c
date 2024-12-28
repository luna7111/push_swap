/* ************************************************************************** */
/*                                                                            */
/*                                                    _.._  .           .     */
/*   other.c                                        .' .-'`        *          */
/*                                                 /  /       +        *      */
/*   By: ldel-val <ldel-val@student.42madrid.com>  |  |           *           */
/*                                                 \  '.___.;       +         */
/*   Created: 2024/12/27 11:12:24 by ldel-val       '._  _.'   .        .     */
/*   Updated: 2024/12/28 02:09:21 by ldel-val          ``                     */
/*                                                                            */
/* ************************************************************************** */

#include <push_swap.h>

size_t	stack_size(t_stack *stack)
{
	size_t	size;

	size = 0;
	while (stack != NULL)
	{
		size ++;
		stack = stack->next;
	}
	return (size);
}

size_t	node_position(t_stack *stack, t_stack *node)
{
	size_t	position;

	position = 0;
	while (stack->next != NULL && stack != node)
	{
		position ++;
		stack = stack->next;
	}
	return (position);
}
