/* ************************************************************************** */
/*                                                                            */
/*                                                    _.._  .           .     */
/*   rotate.c                                       .' .-'`        *          */
/*                                                 /  /       +        *      */
/*   By: ldel-val <ldel-val@student.42madrid.com>  |  |           *           */
/*                                                 \  '.___.;       +         */
/*   Created: 2024/12/28 01:07:55 by ldel-val       '._  _.'   .        .     */
/*   Updated: 2024/12/28 02:04:19 by ldel-val          ``                     */
/*                                                                            */
/* ************************************************************************** */

#include <push_swap.h>

void	o_ra(t_stack **stack)
{
	stack_rotate(stack);
	ft_printf("ra\n");
}

void	o_rb(t_stack **stack)
{
	stack_rotate(stack);
	ft_printf("rb\n");
}

void	o_rr(t_stack **stack_a, t_stack **stack_b)
{
	stack_rotate(stack_a);
	stack_rotate(stack_b);
	ft_printf("rr\n");
}
