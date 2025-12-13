/* ************************************************************************** */
/*                                                                            */
/*                                                    _.._  .           .     */
/*   rotate.c                                       .' .-'`        *          */
/*                                                 /  /       +        *      */
/*   By: ldel-val <ldel-val@student.42madrid.com>  |  |           *           */
/*                                                 \  '.___.;       +         */
/*   Created: 2025/02/17 19:06:19 by ldel-val       '._  _.'   .        .     */
/*   Updated: 2025/02/17 19:06:32 by ldel-val          ``                     */
/*                                                                            */
/* ************************************************************************** */

#include <push_swap.h>

void	o_ra(t_stack **stack, t_oplst **oplst)
{
	stack_rotate(stack);
	add_op(oplst, RA);
}

void	o_rb(t_stack **stack, t_oplst **oplst)
{
	stack_rotate(stack);
	add_op(oplst, RB);
}

void	o_rr(t_stack **stack_a, t_stack **stack_b, t_oplst **oplst)
{
	stack_rotate(stack_a);
	stack_rotate(stack_b);
	add_op(oplst, RR);
}
