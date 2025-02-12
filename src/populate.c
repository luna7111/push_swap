/* ************************************************************************** */
/*                                                                            */
/*                                                    _.._  .           .     */
/*   populate.c                                     .' .-'`        *          */
/*                                                 /  /       +        *      */
/*   By: ldel-val <ldel-val@student.42madrid.com>  |  |           *           */
/*                                                 \  '.___.;       +         */
/*   Created: 2025/02/12 10:17:21 by ldel-val       '._  _.'   .        .     */
/*   Updated: 2025/02/12 11:25:14 by ldel-val          ``                     */
/*                                                                            */
/* ************************************************************************** */

#include <push_swap.h>

int	argument_is_valid(char *arg, t_stack *stack)
{
	if (ft_strncmp(ft_itoa(ft_atoi(arg)), arg, ft_strlen(arg)))
		return (0);
	while (stack != NULL)
	{
		if (ft_atoi(arg) == stack->nb)
			return (0);
		stack = stack->next;
	}
	return (1);
}

int	stack_is_ordered(t_stack *stack)
{
	if (stack == NULL)
		return (-1);
	while (stack->next != NULL)
	{
		if (stack->nb > stack->next->nb)
			return (0);
		stack = stack->next;
	}
	return (1);
}

t_stack *populate_stack(int argn, char **argv)
{
	t_stack *head;
	char	**split_argument;
	int		i;

	i = 0;
	while (--argn)
	{
		split_argument = ft_split(argv[argn], ' ');
		while (split_argument[i])
			i++;
		while (i--)
		{
			if (!argument_is_valid(split_argument[i], head))
				error();
			stack_add_front(&head, new_node(ft_atoi(split_argument[i])));
		}
		free_strarray(split_argument);
	}
	if (stack_is_ordered(head))
		exit(0);
	return (head);
}
