/* ************************************************************************** */
/*                                                                            */
/*                                                    _.._  .           .     */
/*   clear.c                                        .' .-'`        *          */
/*                                                 /  /       +        *      */
/*   By: ldel-val <ldel-val@student.42madrid.com>  |  |           *           */
/*                                                 \  '.___.;       +         */
/*   Created: 2025/02/11 21:11:03 by ldel-val       '._  _.'   .        .     */
/*   Updated: 2025/02/11 22:18:39 by ldel-val          ``                     */
/*                                                                            */
/* ************************************************************************** */

#include <push_swap.h>

void	del_op(t_oplst **operation)
{
	t_oplst *next;

	next = (*operation)->next;
	free(*operation);
	*operation = next;
}

void	clear_oplst(t_oplst **list)
{
	while (*list != NULL)
		del_op(list);
}
