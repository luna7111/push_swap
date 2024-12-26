/* ************************************************************************** */
/*                                                                            */
/*                                                    _.._  .           .     */
/*   get_node.c                                     .' .-'`        *          */
/*                                                 /  /       +        *      */
/*   By: ldel-val <ldel-val@student.42madrid.com>  |  |           *           */
/*                                                 \  '.___.;       +         */
/*   Created: 2024/12/25 22:40:35 by ldel-val       '._  _.'   .        .     */
/*   Updated: 2024/12/26 11:16:35 by ldel-val          ``                     */
/*                                                                            */
/* ************************************************************************** */

t_stack	*last_node(t_stack *list)
(
	if (!list)
		return (NULL);
	while (list->next)
		list = list->next;
	return (list);
)

t_stack *nth_node(t_stack *node, int index)
{
	while (node && index --)
		node = node->next;
	return (node);
}

t_stack *next_to_last_node(t_stack *node)
{
	if (!list || !list->next)
		return (NULL);
	while (list->next->next)
		list = list->next;
	return (list);
}
