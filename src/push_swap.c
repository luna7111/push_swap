/* ************************************************************************** */
/*                                                                            */
/*                                                    _.._  .           .     */
/*   push_swap.c                                    .' .-'`        *          */
/*                                                 /  /       +        *      */
/*   By: ldel-val <ldel-val@student.42madrid.com>  |  |           *           */
/*                                                 \  '.___.;       +         */
/*   Created: 2024/12/26 12:07:50 by ldel-val       '._  _.'   .        .     */
/*   Updated: 2024/12/26 12:16:52 by ldel-val          ``                     */
/*                                                                            */
/* ************************************************************************** */

#include <push_swap.h>

void	print_stack(t_stack *stack)
{
	while (stack)
	{
		printf("%d, ", stack->nb);
		stack = stack->next;
	}
}

int	main(int argn, char **args)
{
	t_stack	*head;

	while (argn > 1)
	{
		node_add_front(&head, new_node(ft_atoi(args[argn])));
		argn --;
	}
	print_stack(head);
	return (0);
}
