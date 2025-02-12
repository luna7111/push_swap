/* ************************************************************************** */
/*                                                                            */
/*                                                    _.._  .           .     */
/*   aux.c                                          .' .-'`        *          */
/*                                                 /  /       +        *      */
/*   By: ldel-val <ldel-val@student.42madrid.com>  |  |           *           */
/*                                                 \  '.___.;       +         */
/*   Created: 2025/02/12 10:05:38 by ldel-val       '._  _.'   .        .     */
/*   Updated: 2025/02/12 12:17:50 by ldel-val          ``                     */
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
