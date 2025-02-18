/* ************************************************************************** */
/*                                                                            */
/*                                                    _.._  .           .     */
/*   indexize.c                                     .' .-'`        *          */
/*                                                 /  /       +        *      */
/*   By: ldel-val <ldel-val@student.42madrid.com>  |  |           *           */
/*                                                 \  '.___.;       +         */
/*   Created: 2025/02/18 14:45:48 by ldel-val       '._  _.'   .        .     */
/*   Updated: 2025/02/18 15:08:48 by ldel-val          ``                     */
/*                                                                            */
/* ************************************************************************** */

#include <push_swap.h>

void	indexize(t_stack *stack)
{
	int		index;
	t_stack	*last_node;
	t_stack	*next_node;
	t_stack	*cursor;

	last_node = smallest_node(stack);
	last_node->ind = 1;
	index = 2;
	while (last_node->nb < biggest_node(stack)->nb)
	{
		cursor = stack;
		next_node = biggest_node(stack);
		while (cursor != NULL)
		{
			if (cursor->nb < next_node->nb && cursor->nb > last_node->nb)
				next_node = cursor;
			cursor = cursor->nx;
		}
		next_node->ind = index;
		last_node = next_node;
		index ++;
	}
}
