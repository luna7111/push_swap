/* ************************************************************************** */
/*                                                                            */
/*                                                    _.._  .           .     */
/*   add.c                                          .' .-'`        *          */
/*                                                 /  /       +        *      */
/*   By: ldel-val <ldel-val@student.42madrid.com>  |  |           *           */
/*                                                 \  '.___.;       +         */
/*   Created: 2025/02/16 16:28:40 by ldel-val       '._  _.'   .        .     */
/*   Updated: 2025/02/17 17:00:04 by ldel-val          ``                     */
/*                                                                            */
/* ************************************************************************** */

#include <push_swap.h>

t_oplst	*last_op(t_oplst *list)
{
	if (!list)
		return (NULL);
	while (list->nx)
		list = list->nx;
	return (list);
}

t_oplst	*new_op(int op_nb)
{
	t_oplst	*node;

	node = (t_oplst *)malloc(sizeof(t_oplst));
	if (!node)
		return (NULL);
	node->op = op_nb;
	node->nx = NULL;
	return (node);
}

void	add_op(t_oplst **list, int op_nb)
{
	t_oplst	*node;

	node = new_op(op_nb);
	if (!node)
		return ;
	if (!*list)
	{
		node->nx = *list;
		*list = node;
	}
	else
		last_op(*list)->nx = node;
}
