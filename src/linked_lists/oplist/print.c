/* ************************************************************************** */
/*                                                                            */
/*                                                    _.._  .           .     */
/*   print.c                                        .' .-'`        *          */
/*                                                 /  /       +        *      */
/*   By: ldel-val <ldel-val@student.42madrid.com>  |  |           *           */
/*                                                 \  '.___.;       +         */
/*   Created: 2025/02/11 22:20:55 by ldel-val       '._  _.'   .        .     */
/*   Updated: 2025/02/17 17:02:27 by ldel-val          ``                     */
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
		ft_printf("pa\n");
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

int	check_fighting(t_oplst *list)
{
	if (list->nx == NULL)
		return (0);
	if (list->op == RA && list->nx->op == RRA)
		return (1);
	if (list->op == RB && list->nx->op == RRB)
		return (1);
	if (list->op == RRA && list->nx->op == RA)
		return (1);
	if (list->op == RRB && list->nx->op == RB)
		return (1);
	if (list->op == PB && list->nx->op == PA)
		return (1);
	if (list->op == PA && list->nx->op == PB)
		return (1);
	return (0);
}

int	check_redundant(t_oplst *list)
{
	if (list->nx == NULL)
		return (0);
	if (list->op == SA && list->nx->op == SB)
		return (SS);
	if (list->op == SB && list->nx->op == SA)
		return (SS);
	if (list->op == RA && list->nx->op == RB)
		return (RR);
	if (list->op == RRA && list->nx->op == RRB)
		return (RRR);
	return (0);
}

void	print_list(t_oplst *list)
{
	while (list != NULL)
	{
		if (check_fighting(list))
		{
			list = list->nx;
			list = list->nx;
		}
		else if (check_redundant(list))
		{
			print_op(check_redundant(list));
			list = list->nx;
			list = list->nx;
		}
		else
		{
			print_op(list->op);
			list = list->nx;
		}
	}
}
