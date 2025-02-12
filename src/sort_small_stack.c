/* ************************************************************************** */
/*                                                                            */
/*                                                    _.._  .           .     */
/*   sort_small_stack.c                             .' .-'`        *          */
/*                                                 /  /       +        *      */
/*   By: ldel-val <ldel-val@student.42madrid.com>  |  |           *           */
/*                                                 \  '.___.;       +         */
/*   Created: 2025/02/12 13:30:31 by ldel-val       '._  _.'   .        .     */
/*   Updated: 2025/02/12 18:04:10 by ldel-val          ``                     */
/*                                                                            */
/* ************************************************************************** */

#include <push_swap.h>

void	sort_three(t_stack **st_a, t_oplst **oplst)
{
	if (stack_is_sorted(*st_a))
		return ;
	if (*st_a == smallest_node(*st_a))
	{
		o_sa(st_a, oplst);
		o_ra(st_a, oplst);
	}
	else if (*st_a == biggest_node(*st_a))
	{
		if (nth_node(*st_a, 1) == smallest_node(*st_a))
			o_ra(st_a, oplst);
		else
		{
			o_sa(st_a, oplst);
			o_rra(st_a, oplst);
		}
	}
	else
	{
		if (nth_node(*st_a, 1) == smallest_node(*st_a))
			o_sa(st_a, oplst);
		else
			o_rra(st_a, oplst);
	}
}

void	sort_first_three_p2(t_stack **st_a, t_stack **st_b, t_oplst **oplst)
{
	if (nth_node(*st_a, 1) == smallest_node(*st_a))
		o_sa(st_a, oplst);
	else
	{
		o_pb(st_a, st_b, oplst);
		o_sa(st_a, oplst);
		o_pa(st_a, st_b, oplst);
		o_sa(st_a, oplst);
	}
}

void	sort_first_three(t_stack **st_a, t_stack **st_b, t_oplst **oplst)
{
	if (stack_is_sorted(*st_a))
		return ;
	if (*st_a == smallest_node(*st_a))
	{
		o_pb(st_a, st_b, oplst);
		o_sa(st_a, oplst);
		o_pa(st_a, st_b, oplst);
	}
	else if (*st_a == biggest_node(*st_a))
	{
		if (nth_node(*st_a, 1) == smallest_node(*st_a))
			o_ra(st_a, oplst);
		else
		{
			o_sa(st_a, oplst);
			o_pb(st_a, st_b, oplst);
			o_sa(st_a, oplst);
			o_pa(st_a, st_b, oplst);
		}
	}
	else
		sort_first_three_p2(st_a, st_b, oplst);
}
