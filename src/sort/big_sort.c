/* ************************************************************************** */
/*                                                                            */
/*                                                    _.._  .           .     */
/*   big_sort.c                                     .' .-'`        *          */
/*                                                 /  /       +        *      */
/*   By: ldel-val <ldel-val@student.42madrid.com>  |  |           *           */
/*                                                 \  '.___.;       +         */
/*   Created: 2025/02/18 15:43:11 by ldel-val       '._  _.'   .        .     */
/*   Updated: 2025/02/18 17:41:23 by ldel-val          ``                     */
/*                                                                            */
/* ************************************************************************** */

#include <push_swap.h>

int	get_rot_cost(t_stack *stack, int nb)
{
	int	cost;

	cost = 0;
	while (stack && stack->ind != nb)
	{
		stack = stack->nx;
		cost++;
	}
	return (cost);
}

int	get_rev_rot_cost(t_stack *stack, int nb)
{
	return (stack_length(stack) - get_rot_cost(stack, nb));
}

void	push_to_b(t_stack **a, t_stack **b, t_oplst **oplst)
{
	int	small_pivot;
	int	big_pivot;

	small_pivot = 0;
	big_pivot = sqrrt(stack_length(*a)) * 1.4;
	while (*a)
	{
		if ((*a)->ind <= small_pivot)
		{
			o_pb(a, b, oplst);
			if (stack_length(*b) > 1)
				o_rb(b, oplst);
			small_pivot ++;
		}
		else if ((*a)->ind <= small_pivot + big_pivot)
		{
			o_pb(a, b, oplst);
			small_pivot ++;
		}
		else
			o_ra(a, oplst);
	}
}

void	return_to_a(t_stack **a, t_stack **b, t_oplst **oplst)
{
	int	rot_cost;
	int	rev_rot_cost;

	while (stack_length(*b))
	{
		rot_cost = get_rot_cost(*b, stack_length(*b));
		rev_rot_cost = get_rev_rot_cost(*b, stack_length(*b));
		if (rot_cost <= rev_rot_cost)
		{
			while ((*b)->ind != stack_length(*b))
				o_rb(b, oplst);
			o_pa(a, b, oplst);
		}
		else
		{
			while ((*b)->ind != stack_length(*b))
				o_rrb(b, oplst);
			o_pa(a, b, oplst);
		}
	}
}

void	big_sort(t_stack **a, t_stack **b, t_oplst **oplst)
{
	push_to_b(a, b, oplst);
	return_to_a(a, b, oplst);
}
