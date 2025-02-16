/* ************************************************************************** */
/*                                                                            */
/*                                                    _.._  .           .     */
/*   aux.c                                          .' .-'`        *          */
/*                                                 /  /       +        *      */
/*   By: ldel-val <ldel-val@student.42madrid.com>  |  |           *           */
/*                                                 \  '.___.;       +         */
/*   Created: 2025/02/12 10:05:38 by ldel-val       '._  _.'   .        .     */
/*   Updated: 2025/02/16 12:31:32 by ldel-val          ``                     */
/*                                                                            */
/* ************************************************************************** */

#include <push_swap.h>

void	error(t_stack **stack, char **split)
{
	clear_stack(stack);
	free_strarray(split);
	write(STDERR, "Error\n", 6);
	exit(0);
}

int	stack_is_sorted(t_stack *stack)
{
	if (stack == NULL)
		return (-1);
	while (stack->next != NULL)
	{
		if (stack->index + 1 != stack->next->index)
			return (0);
		stack = stack->next;
	}
	return (1);
}

void	indexize_stack(t_stack *stack)
{
	int		index;
	t_stack	*last_node;
	t_stack	*next_node;
	t_stack	*cursor;

	last_node = smallest_node(stack);
	last_node->index = 1;
	index = 2;
	while (last_node->nb < biggest_node(stack)->nb)
	{
		cursor = stack;
		next_node = biggest_node(stack);
		while (cursor != NULL)
		{
			if (cursor->nb < next_node->nb && cursor->nb > last_node->nb)
				next_node = cursor;
			cursor = cursor->next;
		}
		next_node->index = index;
		last_node = next_node;
		index ++;
	}
}

double	block_average(t_stack *stack, long block)
{
	double	block_size;
	double	average;

	block_size = 0;
	average = 0;
	while (stack != NULL)
	{
		if (stack->block == block)
		{
			block_size ++;
			average += stack->index;
		}
		stack = stack->next;
	}
	return ((float)average / block_size);
}

double	next_block(long *blk, double pv)
{
	(*blk)++;
	return (pv);
}
