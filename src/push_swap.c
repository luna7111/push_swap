/* ************************************************************************** */
/*                                                                            */
/*                                                    _.._  .           .     */
/*   push_swap.c                                    .' .-'`        *          */
/*                                                 /  /       +        *      */
/*   By: ldel-val <ldel-val@student.42madrid.com>  |  |           *           */
/*                                                 \  '.___.;       +         */
/*   Created: 2024/12/26 12:07:50 by ldel-val       '._  _.'   .        .     */
/*   Updated: 2024/12/28 02:16:58 by ldel-val          ``                     */
/*                                                                            */
/* ************************************************************************** */

#include <push_swap.h>

void	error(int n)
{
	write(STDERR, "Error\n", 6);
	exit(n);
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
			error(1);
		node_add_front(stack, new_node(ft_atoi(split[i])));
	}
}
//for debug only!!!

int	main(int argn, char **args)
{
	t_stack	*stack_a;
	t_stack	*stack_b;

	stack_a = NULL;
	stack_b = NULL;
	while (-- argn)
		parse_argument(&stack_a, args[argn]);
	//print_stack(stack);
	check_stack(stack_a);
	sort(&stack_a, &stack_b);
	return (0);
}
