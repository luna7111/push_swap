/* ************************************************************************** */
/*                                                                            */
/*                                                    _.._  .           .     */
/*   populate.c                                     .' .-'`        *          */
/*                                                 /  /       +        *      */
/*   By: ldel-val <ldel-val@student.42madrid.com>  |  |           *           */
/*                                                 \  '.___.;       +         */
/*   Created: 2025/02/12 10:17:21 by ldel-val       '._  _.'   .        .     */
/*   Updated: 2025/02/12 12:25:41 by ldel-val          ``                     */
/*                                                                            */
/* ************************************************************************** */

#include <push_swap.h>

int	argument_is_valid(char *arg, t_stack *stack)
{
	char	*ideal;

	ideal = ft_itoa(ft_atoi(arg));
	if (ft_strncmp(ideal, arg, ft_strlen(arg)))
	{
		free(ideal);
		return (0);
	}
	while (stack != NULL)
	{
		if (ft_atoi(arg) == stack->nb)
		{
			free(ideal);
			return (0);
		}
		stack = stack->next;
	}
	free(ideal);
	return (1);
}

int	stack_is_ordered(t_stack *stack)
{
	if (stack == NULL)
		return (-1);
	while (stack != NULL && stack->next != NULL)
	{
		if (stack->nb > stack->next->nb)
			return (0);
		stack = stack->next;
	}
	return (1);
}

t_stack	*populate_stack(int argn, char **argv)
{
	t_stack	*head;
	char	**split_argument;
	int		i;

	head = NULL;
	while (--argn)
	{
		i = 0;
		split_argument = ft_split(argv[argn], ' ');
		while (split_argument[i] != NULL)
			i++;
		while (i--)
		{
			if (!argument_is_valid(split_argument[i], head))
				error(&head, split_argument);
			stack_add_front(&head, new_node(ft_atoi(split_argument[i])));
		}
		free_strarray(split_argument);
	}
	if (stack_is_ordered(head))
	{
		clear_stack(&head);
		exit(0);
	}
	return (head);
}
