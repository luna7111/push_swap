/* ************************************************************************** */
/*                                                                            */
/*                                                    _.._  .           .     */
/*   add_remove.c                                   .' .-'`        *          */
/*                                                 /  /       +        *      */
/*   By: ldel-val <ldel-val@student.42madrid.com>  |  |           *           */
/*                                                 \  '.___.;       +         */
/*   Created: 2024/12/25 22:33:15 by ldel-val       '._  _.'   .        .     */
/*   Updated: 2024/12/26 00:23:00 by ldel-val          ``                     */
/*                                                                            */
/* ************************************************************************** */

#include <push_swap.h>

void	node_add_front(t_stack **list, t_stack *node)
{
	if (new)
	{
		new->next = *list;
		*list = node;
	}
}

void	node_add_back(t_stack **list, t_stack *node)
{
	if (!list)
		node_add_front(list, node);
	if (new)
		last_node(*list)->next = node;
}

void	remove_node(t_stack **node)
{
	t_stack *buffer;

	buffer = *node;
	*node = (*node)->next;
}
