/* ************************************************************************** */
/*                                                                            */
/*                                                    _.._  .           .     */
/*   get_node.c                                     .' .-'`        *          */
/*                                                 /  /       +        *      */
/*   By: ldel-val <ldel-val@student.42madrid.com>  |  |           *           */
/*                                                 \  '.___.;       +         */
/*   Created: 2024/12/25 22:40:35 by ldel-val       '._  _.'   .        .     */
/*   Updated: 2024/12/25 23:07:13 by ldel-val          ``                     */
/*                                                                            */
/* ************************************************************************** */

t_stack	*last_node(t_stack *list)
(
	if (!list)
		return (NULL;
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
