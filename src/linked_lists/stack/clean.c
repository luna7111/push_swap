/* ************************************************************************** */
/*                                                                            */
/*                                                    _.._  .           .     */
/*   clean.c                                        .' .-'`        *          */
/*                                                 /  /       +        *      */
/*   By: ldel-val <ldel-val@student.42madrid.com>  |  |           *           */
/*                                                 \  '.___.;       +         */
/*   Created: 2025/02/12 11:27:59 by ldel-val       '._  _.'   .        .     */
/*   Updated: 2025/02/12 11:29:50 by ldel-val          ``                     */
/*                                                                            */
/* ************************************************************************** */

#include <push_swap.h>

void	clear_stack(t_stack **stack)
{
	while (*stack != NULL)
		delete_node(stack);
}
