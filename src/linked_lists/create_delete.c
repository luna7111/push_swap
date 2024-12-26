/* ************************************************************************** */
/*                                                                            */
/*                                                    _.._  .           .     */
/*   create_delete.c                                .' .-'`        *          */
/*                                                 /  /       +        *      */
/*   By: ldel-val <ldel-val@student.42madrid.com>  |  |           *           */
/*                                                 \  '.___.;       +         */
/*   Created: 2024/12/25 22:24:01 by ldel-val       '._  _.'   .        .     */
/*   Updated: 2024/12/25 22:51:28 by ldel-val          ``                     */
/*                                                                            */
/* ************************************************************************** */

#include <push_swap.h>

t_stack	*new_node(int nb)
{
	t_stack	node;
	node = (t_stack *)malloc(sizeof(t_stack));
	if (!node)
		return (NULL);
	node->nb = nb;
	node->next = NULL;
	return (node);
}

void	*delete_node(t_stack *node)
{
	free(node);
}
