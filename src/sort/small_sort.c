/* ************************************************************************** */
/*                                                                            */
/*                                                    _.._  .           .     */
/*   small_sort.c                                   .' .-'`        *          */
/*                                                 /  /       +        *      */
/*   By: ldel-val <ldel-val@student.42madrid.com>  |  |           *           */
/*                                                 \  '.___.;       +         */
/*   Created: 2025/02/17 19:31:49 by ldel-val       '._  _.'   .        .     */
/*   Updated: 2025/02/18 16:35:25 by ldel-val          ``                     */
/*                                                                            */
/* ************************************************************************** */

#include <push_swap.h>

void	sort_three(t_stack **st, t_oplst **oplst)
{
	if ((*st)->ind == 1 && (*st)->nx->ind == 2)
		return ;
	else if ((*st)->ind == 1 && (*st)->nx->ind == 3)
	{
		o_sa(st, oplst);
		o_ra(st, oplst);
	}
	else if ((*st)->ind == 2 && (*st)->nx->ind == 1)
		o_sa(st, oplst);
	else if ((*st)->ind == 2 && (*st)->nx->ind == 3)
		o_rra(st, oplst);
	else if ((*st)->ind == 3 && (*st)->nx->ind == 2)
	{
		o_sa(st, oplst);
		o_rra(st, oplst);
	}
	else if ((*st)->ind == 3 && (*st)->nx->ind == 1)
		o_ra(st, oplst);
}

void	sort_five(t_stack **a, t_stack **b, t_oplst **oplst)
{
	while (stack_length(*a) > 3)
	{
		if ((*a)->ind > 3)
			o_pb(a, b, oplst);
		else
			o_ra(a, oplst);
	}
	sort_three(a, oplst);
	if ((*b)->ind == 5)
		o_rb(b, oplst);
	while (*b)
	{
		o_pa(a, b, oplst);
		o_ra(a, oplst);
	}
}
