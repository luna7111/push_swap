/* ************************************************************************** */
/*                                                                            */
/*                                                    _.._  .           .     */
/*   ft_lstsize_bonus.c                             .' .-'`        *          */
/*                                                 /  /       +        *      */
/*   By: ldel-val <ldel-val@student.42madrid.com>  |  |           *           */
/*                                                 \  '.___.;       +         */
/*   Created: 2024/10/26 15:42:11 by ldel-val       '._  _.'   .        .     */
/*   Updated: 2024/10/27 11:40:02 by ldel-val          ``                     */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"

int	ft_lstsize(t_list *lst)
{
	int		node_number;

	node_number = 1;
	if (!lst)
		return (0);
	while (lst->next)
	{
		node_number ++;
		lst = lst->next;
	}
	return (node_number);
}
