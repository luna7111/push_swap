/* ************************************************************************** */
/*                                                                            */
/*                                                    _.._  .           .     */
/*   push.c                                         .' .-'`        *          */
/*                                                 /  /       +        *      */
/*   By: ldel-val <ldel-val@student.42madrid.com>  |  |           *           */
/*                                                 \  '.___.;       +         */
/*   Created: 2024/12/28 01:04:46 by ldel-val       '._  _.'   .        .     */
/*   Updated: 2024/12/28 02:03:49 by ldel-val          ``                     */
/*                                                                            */
/* ************************************************************************** */

#include <push_swap.h>

void	o_pa(t_stack **stack_a, t_stack **stack_b)
{
	stack_push(stack_b, stack_a);
	ft_printf("pa\n");
}

void	o_pb(t_stack **stack_a, t_stack **stack_b)
{
	stack_push(stack_a, stack_b);
	ft_printf("pb\n");
}
