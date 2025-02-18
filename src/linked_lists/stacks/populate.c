/* ************************************************************************** */
/*                                                                            */
/*                                                    _.._  .           .     */
/*   populate.c                                     .' .-'`        *          */
/*                                                 /  /       +        *      */
/*   By: ldel-val <ldel-val@student.42madrid.com>  |  |           *           */
/*                                                 \  '.___.;       +         */
/*   Created: 2025/02/17 17:35:41 by ldel-val       '._  _.'   .        .     */
/*   Updated: 2025/02/18 17:44:01 by ldel-val          ``                     */
/*                                                                            */
/* ************************************************************************** */

#include <push_swap.h>

int	argument_is_valid(char *arg, t_stack *stack)
{
	char	*ideal;
	int		number;
	int		len;

	len = ft_strlen(arg);
	number = ft_atoi(arg);
	ideal = ft_itoa(number);
	if (ft_strncmp(ideal, arg, len) && ft_strncmp(ideal, &arg[1], len - 1))
	{
		free(ideal);
		return (0);
	}
	while (stack != NULL)
	{
		if (number == stack->nb)
		{
			free(ideal);
			return (0);
		}
		stack = stack->nx;
	}
	free(ideal);
	return (1);
}

int	stack_is_ordered(t_stack *stack)
{
	if (stack == NULL)
		return (-1);
	while (stack != NULL && stack->nx != NULL)
	{
		if (stack->nb > stack->nx->nb)
			return (0);
		stack = stack->nx;
	}
	return (1);
}

t_stack	*populate(int argn, char **argv)
{
	t_stack	*head;
	char	**split_arg;
	int		i;

	head = NULL;
	while (--argn)
	{
		i = 0;
		split_arg = ft_split(argv[argn], ' ');
		while (split_arg[i] != NULL)
			i++;
		while (i--)
		{
			if (!argument_is_valid(split_arg[i], head))
				error(&head, split_arg);
			stack_add_front(&head, new_node(ft_atoi(split_arg[i])));
		}
		free_strarray(split_arg);
	}
	if (stack_is_ordered(head))
	{
		clear_stack(&head);
		exit(0);
	}
	return (head);
}
