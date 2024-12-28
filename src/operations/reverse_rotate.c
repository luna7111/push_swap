/* ************************************************************************** */
/*                                                                            */
/*                                                    _.._  .           .     */
/*   reverse_rotate.c                               .' .-'`        *          */
/*                                                 /  /       +        *      */
/*   By: ldel-val <ldel-val@student.42madrid.com>  |  |           *           */
/*                                                 \  '.___.;       +         */
/*   Created: 2024/12/28 01:07:55 by ldel-val       '._  _.'   .        .     */
/*   Updated: 2024/12/28 02:04:05 by ldel-val          ``                     */
/*                                                                            */
/* ************************************************************************** */

#include <push_swap.h>

void	o_rra(t_stack **stack)
{
	stack_reverse_rotate(stack);
	ft_printf("rra\n");
}

void	o_rrb(t_stack **stack)
{
	stack_reverse_rotate(stack);
	ft_printf("rrb\n");
}

void	o_rrr(t_stack **stack_a, t_stack **stack_b)
{
	stack_reverse_rotate(stack_a);
	stack_reverse_rotate(stack_b);
	ft_printf("rrr\n");
}
