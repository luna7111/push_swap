/* ************************************************************************** */
/*                                                                            */
/*                                                    _.._  .           .     */
/*   block_access.c                                 .' .-'`        *          */
/*                                                 /  /       +        *      */
/*   By: ldel-val <ldel-val@student.42madrid.com>  |  |           *           */
/*                                                 \  '.___.;       +         */
/*   Created: 2025/02/13 16:49:07 by ldel-val       '._  _.'   .        .     */
/*   Updated: 2025/02/13 22:26:44 by ldel-val          ``                     */
/*                                                                            */
/* ************************************************************************** */

#include <push_swap.h>

t_stack	*biggest_in_block(t_stack *stack)
{
	t_stack	*biggest;
	long	block;

	block = stack->block;
	biggest = stack;
	stack = stack->next;
	while (stack != NULL)
	{
		if (stack->block == block && stack->nb > biggest->nb)
			biggest = stack;
		stack = stack->next;
	}
	return (biggest);
}

t_stack	*smallest_in_block(t_stack *stack)
{
	t_stack	*smallest;
	long	block;

	block = stack->block;
	smallest = stack;
	stack = stack->next;
	while (stack != NULL)
	{
		if (stack->block == block && stack->nb < smallest->nb)
			smallest = stack;
		stack = stack->next;
	}
	return (smallest);
}
