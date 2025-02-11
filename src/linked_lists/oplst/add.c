/* ************************************************************************** */
/*                                                                            */
/*                                                    _.._  .           .     */
/*   add.c                                          .' .-'`        *          */
/*                                                 /  /       +        *      */
/*   By: ldel-val <ldel-val@student.42madrid.com>  |  |           *           */
/*                                                 \  '.___.;       +         */
/*   Created: 2025/02/11 20:44:17 by ldel-val       '._  _.'   .        .     */
/*   Updated: 2025/02/11 22:05:18 by ldel-val          ``                     */
/*                                                                            */
/* ************************************************************************** */

#include <push_swap.h>

t_oplst *last_op(t_oplst *list)
{
	if (!list)
		return (NULL);
	while (list->next)
		list = list->next;
	return (list);
}

t_oplst	*new_op(int op_nb)
{
	t_oplst	*node;

	node = (t_oplst *)malloc(sizeof(t_oplst));
	if (!node)
		return (NULL);
	node->op = op_nb;
	node->next = NULL;
	return (node);
}

void	add_op(t_oplst **list, int op_nb)
{
	t_oplst *node;

	node = new_op(op_nb);
	if (!node)
		return ;
	if (!*list)
	{
		node->next = *list;
		*list = node;
	}
	else
		last_op(*list)->next = node;
}
