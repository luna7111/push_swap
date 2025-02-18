/* ************************************************************************** */
/*                                                                            */
/*                                                    _.._  .           .     */
/*   checker.c                                      .' .-'`        *          */
/*                                                 /  /       +        *      */
/*   By: ldel-val <ldel-val@student.42madrid.com>  |  |           *           */
/*                                                 \  '.___.;       +         */
/*   Created: 2025/02/18 17:48:25 by ldel-val       '._  _.'   .        .     */
/*   Updated: 2025/02/18 20:26:15 by ldel-val          ``                     */
/*                                                                            */
/* ************************************************************************** */

#include <push_swap.h>

int	exec_instruction(t_stack **a, t_stack **b, t_oplst **oplst, char *op)
{
	if (!ft_strncmp(op, "SA\n", 3))
		o_sa(a, oplst);
	else if (!ft_strncmp(op, "SB\n", 3))
		o_sb(b, oplst);
	else if (!ft_strncmp(op, "SS\n", 3))
		o_ss(a, b, oplst);
	else if (!ft_strncmp(op, "PA\n", 3))
		o_pa(a, b, oplst);
	else if (!ft_strncmp(op, "PB\n", 3))
		o_pb(a, b, oplst);
	else if (!ft_strncmp(op, "RA\n", 3))
		o_ra(a, oplst);
	else if (!ft_strncmp(op, "RB\n", 3))
		o_rb(b, oplst);
	else if (!ft_strncmp(op, "RR\n", 3))
		o_rr(a, b, oplst);
	else if (!ft_strncmp(op, "RRA\n", 4))
		o_rra(a, oplst);
	else if (!ft_strncmp(op, "RRB\n", 4))
		o_rrb(b, oplst);
	else if (!ft_strncmp(op, "RRR\n", 4))
		o_rrr(a, b, oplst);
	else
		return (1);
	return (0);
}

int	follow_instructions(t_stack **a, t_stack **b, t_oplst **oplst)
{
	char	*op;

	op = get_next_line(STDIN);
	while (op)
	{
		if (exec_instruction(a, b, oplst, op) == 1)
			return (1);
		free(op);
		op = get_next_line(STDIN);
	}
	return (0);
}

int	main(int argn, char **argv)
{
	t_stack	*st_a;
	t_stack	*st_b;
	t_oplst	*oplst;
	int		error;

	st_b = NULL;
	oplst = NULL;
	st_a = populate(argn, argv);
	indexize(st_a);
	error = follow_instructions(&st_a, &st_b, &oplst);
	if (error == 0 && stack_is_ordered(st_a))
		ft_printf("OK\n");
	else if (error == 0)
		ft_printf("KO\n");
	clear_stack(&st_a);
	clear_oplst(&oplst);
	if (error == 1)
		ft_printf("Error\n");
}
