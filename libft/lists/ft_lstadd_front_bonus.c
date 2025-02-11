/* ************************************************************************** */
/*                                                                            */
/*                                                    _.._  .           .     */
/*   ft_lstadd_front_bonus.c                        .' .-'`        *          */
/*                                                 /  /       +        *      */
/*   By: ldel-val <ldel-val@student.42madrid.com>  |  |           *           */
/*                                                 \  '.___.;       +         */
/*   Created: 2024/10/26 15:41:09 by ldel-val       '._  _.'   .        .     */
/*   Updated: 2024/10/27 11:40:01 by ldel-val          ``                     */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"

void	ft_lstadd_front(t_list **lst, t_list *new)
{
	if (new)
	{
		new->next = *lst;
		*lst = new;
	}
}
