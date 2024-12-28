/* ************************************************************************** */
/*                                                                            */
/*                                                    _.._  .           .     */
/*   check.c                                        .' .-'`        *          */
/*                                                 /  /       +        *      */
/*   By: ldel-val <ldel-val@student.42madrid.com>  |  |           *           */
/*                                                 \  '.___.;       +         */
/*   Created: 2024/12/27 22:59:23 by ldel-val       '._  _.'   .        .     */
/*   Updated: 2024/12/28 02:25:58 by ldel-val          ``                     */
/*                                                                            */
/* ************************************************************************** */

#include <push_swap.h>

int	section_is_smaller(t_stack *start, t_stack *end, int nb)
{
	while (start != NULL && start->nb != end->nb)
	{
		if (start->nb >= nb)
			return (0);
		start = start->next;
	}
	return (1);
}

int	section_is_bigger(t_stack *start, t_stack *end, int nb)
{
	while (start != NULL && start->nb != end->nb)
	{
		if (start->nb < nb)
			return (0);
		start = start->next;
	}
	return (1);
}

int	section_is_ordered(t_stack *start, t_stack *end)
{
	while (start->nb != end->nb)
	{
		if (start->nb > start->next->nb)
			return (0);
		start = start->next;
	}
	return (1);
}

int	is_ordered(t_stack *stack)
{
	if (stack == NULL)
		return (1);
	while (stack->next != NULL)	
	{
		if (stack->nb > stack->next->nb)
			return (0);
		stack = stack->next;
	}
	return (1);
}

void	check_stack(t_stack *stack)
{
	t_stack	*check;
	
	if (is_ordered(stack))
		exit(0);
	while (stack->next != NULL)
	{
		check = stack->next;
		while (check != NULL)
		{
			if (stack->nb == check->nb)
				error(1);
			check = check->next;
		}
		stack = stack->next;
	}
}
