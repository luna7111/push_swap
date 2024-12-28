/* ************************************************************************** */
/*                                                                            */
/*                                                    _.._  .           .     */
/*   swap.c                                         .' .-'`        *          */
/*                                                 /  /       +        *      */
/*   By: ldel-val <ldel-val@student.42madrid.com>  |  |           *           */
/*                                                 \  '.___.;       +         */
/*   Created: 2024/12/28 00:59:05 by ldel-val       '._  _.'   .        .     */
/*   Updated: 2024/12/28 02:04:39 by ldel-val          ``                     */
/*                                                                            */
/* ************************************************************************** */

#include <push_swap.h>

void	o_sa(t_stack **stack)
{
	stack_swap(stack);
	ft_printf("sa\n");
}

void	o_sb(t_stack **stack)
{
	stack_swap(stack);
	ft_printf("sb\n");
}

void	o_ss(t_stack **stack_a, t_stack **stack_b)
{
	stack_swap(stack_a);
	stack_swap(stack_b);
	ft_printf("ss\n");
}
