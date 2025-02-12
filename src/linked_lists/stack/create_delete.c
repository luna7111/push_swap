/* ************************************************************************** */
/*                                                                            */
/*                                                    _.._  .           .     */
/*   create_delete.c                                .' .-'`        *          */
/*                                                 /  /       +        *      */
/*   By: ldel-val <ldel-val@student.42madrid.com>  |  |           *           */
/*                                                 \  '.___.;       +         */
/*   Created: 2025/02/11 19:51:53 by ldel-val       '._  _.'   .        .     */
/*   Updated: 2025/02/12 00:52:01 by ldel-val          ``                     */
/*                                                                            */
/* ************************************************************************** */

#include <push_swap.h>

t_stack	*new_node(int nb)
{
	t_stack	*node;

	node = (t_stack *)malloc(sizeof(t_stack));
	if (!node)
		return (NULL);
	node->nb = nb;
	node->index = -1;
	node->block = 0;
	node->next = NULL;
	return (node);
}

void	delete_node(t_stack **node)
{
	t_stack	*next;

	next = (*node)->next;
	free(*node);
	*node = next;
}
