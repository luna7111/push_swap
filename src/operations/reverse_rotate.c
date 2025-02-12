/* ************************************************************************** */
/*                                                                            */
/*                                                    _.._  .           .     */
/*   reverse_rotate.c                               .' .-'`        *          */
/*                                                 /  /       +        *      */
/*   By: ldel-val <ldel-val@student.42madrid.com>  |  |           *           */
/*                                                 \  '.___.;       +         */
/*   Created: 2025/02/12 00:21:38 by ldel-val       '._  _.'   .        .     */
/*   Updated: 2025/02/12 01:09:59 by ldel-val          ``                     */
/*                                                                            */
/* ************************************************************************** */

#include <push_swap.h>

void	o_rra(t_stack **stack, t_oplst **oplst)
{
	stack_reverse_rotate(stack);
	add_op(oplst, RRA);
}

void	o_rrb(t_stack **stack, t_oplst **oplst)
{
	stack_reverse_rotate(stack);
	add_op(oplst, RRB);
}

void	o_rrr(t_stack **stack_a, t_stack **stack_b, t_oplst **oplst)
{
	stack_reverse_rotate(stack_a);
	stack_reverse_rotate(stack_b);
	add_op(oplst, RRR);
}
