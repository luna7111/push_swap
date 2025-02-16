/* ************************************************************************** */
/*                                                                            */
/*                                                    _.._  .           .     */
/*   other.c                                        .' .-'`        *          */
/*                                                 /  /       +        *      */
/*   By: ldel-val <ldel-val@student.42madrid.com>  |  |           *           */
/*                                                 \  '.___.;       +         */
/*   Created: 2025/02/11 20:13:53 by ldel-val       '._  _.'   .        .     */
/*   Updated: 2025/02/14 20:12:49 by ldel-val          ``                     */
/*                                                                            */
/* ************************************************************************** */

#include <push_swap.h>

int	only_block(t_stack *stack)
{
	int	block;

	block = stack->block;
	while (stack != NULL)
	{
		if (stack->block != block)
			return (0);
		stack = stack->next;
	}
	return (1);
}

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

int	block_ocurrences(t_stack *stack, long blk)
{
	int	ocurrences;

	ocurrences = 0;
	while (stack != NULL)
	{
		if (stack->block == blk)
			ocurrences ++;
		stack = stack->next;
	}
	return (ocurrences);
}
