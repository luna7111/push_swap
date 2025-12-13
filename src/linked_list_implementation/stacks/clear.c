/* ************************************************************************** */
/*                                                                            */
/*                                                    _.._  .           .     */
/*   clear.c                                        .' .-'`        *          */
/*                                                 /  /       +        *      */
/*   By: ldel-val <ldel-val@student.42madrid.com>  |  |           *           */
/*                                                 \  '.___.;       +         */
/*   Created: 2025/02/17 18:08:14 by ldel-val       '._  _.'   .        .     */
/*   Updated: 2025/02/17 18:09:25 by ldel-val          ``                     */
/*                                                                            */
/* ************************************************************************** */

#include <push_swap.h>

void	clear_stack(t_stack **stack)
{
	while (*stack != NULL)
		delete_node(stack);
}
