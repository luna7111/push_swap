/* ************************************************************************** */
/*                                                                            */
/*                                                    _.._  .           .     */
/*   print.c                                        .' .-'`        *          */
/*                                                 /  /       +        *      */
/*   By: ldel-val <ldel-val@student.42madrid.com>  |  |           *           */
/*                                                 \  '.___.;       +         */
/*   Created: 2025/02/11 22:20:55 by ldel-val       '._  _.'   .        .     */
/*   Updated: 2025/02/11 22:26:49 by ldel-val          ``                     */
/*                                                                            */
/* ************************************************************************** */

#include <push_swap.h>

void	print_op(int operation)
{
	if (operation == SA)
		ft_printf("sa\n");
	else if (operation == SB)
		ft_printf("sb\n");
	else if (operation == SS)
		ft_printf("ss\n");
	else if (operation == PA)
		ft_printf("PA\n");
	else if (operation == PB)
		ft_printf("pb\n");
	else if (operation == RA)
		ft_printf("ra\n");
	else if (operation == RB)
		ft_printf("rb\n");
	else if (operation == RR)
		ft_printf("rr\n");
	else if (operation == RRA)
		ft_printf("rra\n");
	else if (operation == RRB)
		ft_printf("rrb\n");
	else if (operation == RRR)
		ft_printf("rrr\n");
}

void	print_list(t_oplst *list)
{
	while (list != NULL)
	{
		print_op(list->op);
		list = list->next;
	}
}
