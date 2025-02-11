/* ************************************************************************** */
/*                                                                            */
/*                                                    _.._  .           .     */
/*   ft_lstclear_bonus.c                            .' .-'`        *          */
/*                                                 /  /       +        *      */
/*   By: ldel-val <ldel-val@student.42madrid.com>  |  |           *           */
/*                                                 \  '.___.;       +         */
/*   Created: 2024/10/26 15:41:23 by ldel-val       '._  _.'   .        .     */
/*   Updated: 2024/10/27 11:40:01 by ldel-val          ``                     */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void *))
{
	t_list	*buffer;

	if (lst && del)
	{
		while (*lst)
		{
			buffer = *lst;
			*lst = (*lst)->next;
			del(buffer->content);
			free(buffer);
		}
	}
}
