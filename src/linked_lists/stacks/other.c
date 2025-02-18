/* ************************************************************************** */
/*                                                                            */
/*                                                    _.._  .           .     */
/*   other.c                                        .' .-'`        *          */
/*                                                 /  /       +        *      */
/*   By: ldel-val <ldel-val@student.42madrid.com>  |  |           *           */
/*                                                 \  '.___.;       +         */
/*   Created: 2025/02/18 15:34:17 by ldel-val       '._  _.'   .        .     */
/*   Updated: 2025/02/18 15:40:19 by ldel-val          ``                     */
/*                                                                            */
/* ************************************************************************** */

#include <push_swap.h>

int	stack_length(t_stack *stack)
{
	int	lenght;

	lenght = 0;
	while (stack != NULL)
	{
		lenght ++;
		stack = stack->nx;
	}
	return (lenght);
}
