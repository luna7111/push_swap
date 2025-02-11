/* ************************************************************************** */
/*                                                                            */
/*                                                    _.._  .           .     */
/*   swap.c                                         .' .-'`        *          */
/*                                                 /  /       +        *      */
/*   By: ldel-val <ldel-val@student.42madrid.com>  |  |           *           */
/*                                                 \  '.___.;       +         */
/*   Created: 2025/02/12 00:28:24 by ldel-val       '._  _.'   .        .     */
/*   Updated: 2025/02/12 00:37:22 by ldel-val          ``                     */
/*                                                                            */
/* ************************************************************************** */

#include <push_swap.h>

void	o_sa(t_stack **stack, t_oplst **oplst)
{
	stack_swap(stack);
	add_op(oplst, SA);
}

void	o_sb(t_stack **stack, t_oplst **oplst)
{
	stack_swap(stack);
	add_op(oplst, SB);
}

void	o_ss(t_stack **stack_a, t_stack **stack_b, t_oplst **oplst)
{
	stack_swap(stack_a);
	stack_swap(stack_b);
	add_op(oplst, SS);
}
