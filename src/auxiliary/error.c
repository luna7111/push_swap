/* ************************************************************************** */
/*                                                                            */
/*                                                    _.._  .           .     */
/*   error.c                                        .' .-'`        *          */
/*                                                 /  /       +        *      */
/*   By: ldel-val <ldel-val@student.42madrid.com>  |  |           *           */
/*                                                 \  '.___.;       +         */
/*   Created: 2025/02/17 18:06:55 by ldel-val       '._  _.'   .        .     */
/*   Updated: 2025/02/17 18:17:30 by ldel-val          ``                     */
/*                                                                            */
/* ************************************************************************** */

#include <push_swap.h>

void	error(t_stack **stack, char **split)
{
	clear_stack(stack);
	free_strarray(split);
	write(STDERR, "Error\n", 6);
	exit(0);
}
