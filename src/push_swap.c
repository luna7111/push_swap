/* ************************************************************************** */
/*                                                                            */
/*                                                    _.._  .           .     */
/*   push_swap.c                                    .' .-'`        *          */
/*                                                 /  /       +        *      */
/*   By: ldel-val <ldel-val@student.42madrid.com>  |  |           *           */
/*                                                 \  '.___.;       +         */
/*   Created: 2024/12/26 12:07:50 by ldel-val       '._  _.'   .        .     */
/*   Updated: 2024/12/27 22:53:13 by ldel-val          ``                     */
/*                                                                            */
/* ************************************************************************** */

#include <push_swap.h>

void	error()
{
	write(STDERR, "Error\n", 6);
	exit(1);
}

void	print_stack(t_stack *stack)
{
	while (stack != NULL)
	{
		ft_printf("%d, %p\n", stack->nb, stack->next);
		stack = stack->next;
	}
}

void	parse_argument(t_stack **stack, char *arg)
{
	char	**split;
	int		i;

	i = 0;
	split = ft_split(arg, ' ');
	while (split[i])
		i ++;
	while (i)
	{
		i --;
		if (!str_is_int(split[i]))
			error();
		node_add_front(stack, new_node(ft_atoi(split[i])));
	}
}

int	main(int argn, char **args)
{
	t_stack	*stack_a;
	t_stack	*stack_b;

	stack_a = NULL;
	while (-- argn)
		parse_argument(&stack_a, args[argn]);
	print_stack(stack_a);
	check_stack(stack_a);
	return (0);
}
