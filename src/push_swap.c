/* ************************************************************************** */
/*                                                                            */
/*                                                    _.._  .           .     */
/*   push_swap.c                                    .' .-'`        *          */
/*                                                 /  /       +        *      */
/*   By: ldel-val <ldel-val@student.42madrid.com>  |  |           *           */
/*                                                 \  '.___.;       +         */
/*   Created: 2025/01/29 17:00:19 by ldel-val       '._  _.'   .        .     */
/*   Updated: 2025/01/29 17:32:57 by ldel-val          ``                     */
/*                                                                            */
/* ************************************************************************** */

#include <push_swap.h>

void	error(int errno)
{
	write(STDERR, "Error\n", 6);
	exit(errno);
}

int	argument_is_valid(char *arg)
{
	if (ft_strncmp(ft_itoa(ft_atoi(arg)), arg, ft_strlen(arg)))
		return (0);
	return (1);
}

t_stack *populate_stack(int argn, char **argv)
{
	t_stack *head;
	char 	**split_argument;
	int		current_arg;
	int		i;

	current_arg = 1;
	i = 0;
	while (current_arg < argn)
	{
		split_argument = ft_split(argv[current_arg], ' ');
		while (split_argument[i])
			i++;
		while (i--)
		{
			if (!argument_is_valid(split_argument[i]))
				error(-1);
			node_add_front(&head, new_node(ft_atoi(split_argument[i])));
		}
		current_arg++;
	}
	return (head);
}

int	main(int argn, char **argv)
{
	t_stack	*head_a;

	head_a = populate_stack(argn, argv);
	ft_printf("%p", head_a);
	//print_hole_stack(head_a);
}
