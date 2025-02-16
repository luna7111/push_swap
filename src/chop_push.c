/* ************************************************************************** */
/*                                                                            */
/*                                                    _.._  .           .     */
/*   chop_push.c                                    .' .-'`        *          */
/*                                                 /  /       +        *      */
/*   By: ldel-val <ldel-val@student.42madrid.com>  |  |           *           */
/*                                                 \  '.___.;       +         */
/*   Created: 2025/02/16 10:42:59 by ldel-val       '._  _.'   .        .     */
/*   Updated: 2025/02/16 12:34:20 by ldel-val          ``                     */
/*                                                                            */
/* ************************************************************************** */

#include <push_swap.h>

void	chop_push(t_stack **st_a, t_stack **st_b, long *blk_nb, t_oplst **oplst)
{
	double	pivot;

	while (stack_size(*st_a) > 3 && !stack_is_sorted(*st_a))
	{
		pivot = block_average(*st_a, 0);
		(*blk_nb)++;
		while (smallest_node(*st_a)->index < pivot)
		{
			if ((*st_a)->index < pivot)
				o_pb_blk(st_a, st_b, oplst, *blk_nb);
			else
				o_ra(st_a, oplst);
		}
	}
}
