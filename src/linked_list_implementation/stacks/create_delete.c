/* ************************************************************************** */
/*                                                                            */
/*                                                    _.._  .           .     */
/*   create_delete.c                                .' .-'`        *          */
/*                                                 /  /       +        *      */
/*   By: ldel-val <ldel-val@student.42madrid.com>  |  |           *           */
/*                                                 \  '.___.;       +         */
/*   Created: 2025/02/17 14:15:25 by ldel-val       '._  _.'   .        .     */
/*   Updated: 2025/02/18 17:44:22 by ldel-val          ``                     */
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
	node->ind = -1;
	node->nx = NULL;
	node->pr = NULL;
	return (node);
}

void	delete_node(t_stack **node)
{
	t_stack	*buffer;

	buffer = (*node)->nx;
	if ((*node)->pr != NULL)
		(*node)->pr->nx = (*node)->nx;
	if ((*node)->nx != NULL)
		(*node)->nx->pr = (*node)->pr;
	free(*node);
	*node = buffer;
}
