/* ************************************************************************** */
/*                                                                            */
/*                                                    _.._  .           .     */
/*   push_swap.c                                    .' .-'`        *          */
/*                                                 /  /       +        *      */
/*   By: ldel-val <ldel-val@student.42madrid.com>  |  |           *           */
/*                                                 \  '.___.;       +         */
/*   Created: 2024/12/26 12:07:50 by ldel-val       '._  _.'   .        .     */
/*   Updated: 2024/12/26 22:03:51 by ldel-val          ``                     */
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

	(void)stack;
	i = 0;
	split = ft_split(arg, ' ');
	while (split[i])
	{
		if (!str_is_int(split[i]))
			error();
		i ++;
	}
}

int	main(int argn, char **args)
{
	t_stack	*stack_a;
	//t_stack	*stack_b;

	while (-- argn)
		parse_argument(&stack_a, args[argn]);

	return (0);
}
