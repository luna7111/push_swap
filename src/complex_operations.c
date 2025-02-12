/* ************************************************************************** */
/*                                                                            */
/*                                                    _.._  .           .     */
/*   complex_operations.c                           .' .-'`        *          */
/*                                                 /  /       +        *      */
/*   By: ldel-val <ldel-val@student.42madrid.com>  |  |           *           */
/*                                                 \  '.___.;       +         */
/*   Created: 2025/02/12 14:10:30 by ldel-val       '._  _.'   .        .     */
/*   Updated: 2025/02/12 23:22:54 by ldel-val          ``                     */
/*                                                                            */
/* ************************************************************************** */

#include <push_swap.h>
/*
void	block_push_a(t_stack **st_a, t_stack **st_b, long *blk_nb)
{

}

void	block_push_b(t_stack **st_a, t_stack **st_b, long *blk_nb)
{

}
*/
void	chop_push(t_stack **st_a, t_stack **st_b, long *blk_nb, t_oplst **oplst)
{
	double	pivot;

	while (stack_size(*st_a) > 3 && !stack_is_sorted(*st_a))
	{
		pivot = block_average(*st_a);
		(*blk_nb)++;
		while (smallest_node(*st_a)->index < pivot)
		{
			if ((*st_a)->index < pivot)
			{
				(*st_a)->block = *blk_nb;
				o_pb(st_a, st_b, oplst);
			}
			else
				o_ra(st_a, oplst);
		}
	}
}
