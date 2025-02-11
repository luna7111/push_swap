/* ************************************************************************** */
/*                                                                            */
/*                                                    _.._  .           .     */
/*   push.c                                         .' .-'`        *          */
/*                                                 /  /       +        *      */
/*   By: ldel-val <ldel-val@student.42madrid.com>  |  |           *           */
/*                                                 \  '.___.;       +         */
/*   Created: 2025/02/12 00:18:51 by ldel-val       '._  _.'   .        .     */
/*   Updated: 2025/02/12 00:21:00 by ldel-val          ``                     */
/*                                                                            */
/* ************************************************************************** */

#include <push_swap.h>

void	o_pa(t_stack **stack_a, t_stack **stack_b, t_oplst **oplst)
{
	stack_push(stack_b, stack_a);
	add_op(oplst, PA);
}

void	o_pb(t_stack **stack_a, t_stack **stack_b, t_oplst **oplst)
{
	stack_push(stack_a, stack_b);
	add_op(oplst, PB);
}

