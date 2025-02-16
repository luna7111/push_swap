/* ************************************************************************** */
/*                                                                            */
/*                                                    _.._  .           .     */
/*   complex_operations.c                           .' .-'`        *          */
/*                                                 /  /       +        *      */
/*   By: ldel-val <ldel-val@student.42madrid.com>  |  |           *           */
/*                                                 \  '.___.;       +         */
/*   Created: 2025/02/12 14:10:30 by ldel-val       '._  _.'   .        .     */
/*   Updated: 2025/02/16 12:35:57 by ldel-val          ``                     */
/*                                                                            */
/* ************************************************************************** */

#include <push_swap.h>

void	o_pa_blk(t_stack **st_a, t_stack **st_b, t_oplst **oplst, long blk)
{
	(*st_b)->block = blk;
	o_pa(st_a, st_b, oplst);
}

void	o_pb_blk(t_stack **st_a, t_stack **st_b, t_oplst **oplst, long blk)
{
	(*st_a)->block = blk;
	o_pb(st_a, st_b, oplst);
}

void	block_push_a(t_stack **st_a, t_stack **st_b, long *blk, t_oplst **oplst)
{
	long	ref;
	double	pv;

	ref = (*st_b)->block;
	pv = block_average(*st_b, ref);
	(*blk)++;
	while ((*st_b)->next && (*st_b)->next->block == ref && biggest_in_block(*st_b)->index >= pv)
	{
		if (stack_is_sorted(*st_a) && (*st_b)->next && (*st_b)->next->index == (*st_a)->index - 1)
			o_sb(st_b, oplst);
		if ((*st_b)->index >= pv)
			o_pa_blk(st_a, st_b, oplst, *blk);
		else
			o_rb(st_b, oplst);
	}
	if ((*st_b)->index >= pv)
		o_pa_blk(st_a, st_b, oplst, *blk);
	if (!*st_b || !(*st_b)->next || only_block(*st_b))
		return ;
	while (last_node(*st_b)->block == ref)
		o_rrb(st_b, oplst);
}

void	block_push_b(t_stack **st_a, t_stack **st_b, long *blk, t_oplst **oplst)
{
	long	ref;
	double	pv;

	ref = (*st_a)->block;
	while ((*st_a)->block == ref && !stack_is_sorted(*st_a))
	{
		if (block_ocurrences(*st_a, ref) <= 1)
			o_pb_blk(st_a, st_b, oplst, (*st_b)->block);
		pv = next_block(blk, block_average(*st_a, ref));
		while ((*st_a)->next->block == ref && smallest_in_block(*st_a)->index < pv)
			if ((*st_a)->index < pv)
				o_pb_blk(st_a, st_b, oplst, *blk);
		else
			o_ra(st_a, oplst);
		if ((*st_a)->index < pv)
			o_pb_blk(st_a, st_b, oplst, *blk);
		pv = next_block(blk, block_average(last_node(*st_a), ref));
		while (last_node(*st_a)->block == ref)
			if ((*st_a)->index < pv)
				o_pb_blk(st_a, st_b, oplst, *blk);
			else
				o_rra(st_a, oplst);
		if ((*st_a)->index < pv && (*st_a)->block == ref)
			o_pb_blk(st_a, st_b, oplst, *blk);
	}
}
