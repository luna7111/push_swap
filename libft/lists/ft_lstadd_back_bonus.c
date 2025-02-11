/* ************************************************************************** */
/*                                                                            */
/*                                                    _.._  .           .     */
/*   ft_lstadd_back_bonus.c                         .' .-'`        *          */
/*                                                 /  /       +        *      */
/*   By: ldel-val <ldel-val@student.42madrid.com>  |  |           *           */
/*                                                 \  '.___.;       +         */
/*   Created: 2024/10/26 15:41:01 by ldel-val       '._  _.'   .        .     */
/*   Updated: 2024/10/27 11:40:01 by ldel-val          ``                     */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"

void	ft_lstadd_back(t_list **lst, t_list *new)
{
	if (!*lst)
	{
		ft_lstadd_front(lst, new);
		return ;
	}
	if (new)
		ft_lstlast(*lst)->next = new;
}
