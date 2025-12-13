/* ************************************************************************** */
/*                                                                            */
/*                                                    _.._  .           .     */
/*   sort.c                                         .' .-'`        *          */
/*                                                 /  /       +        *      */
/*   By: ldel-val <ldel-val@student.42madrid.com>  |  |           *           */
/*                                                 \  '.___.;       +         */
/*   Created: 2025/02/17 18:37:21 by ldel-val       '._  _.'   .        .     */
/*   Updated: 2025/02/18 16:21:07 by ldel-val          ``                     */
/*                                                                            */
/* ************************************************************************** */

#include <push_swap.h>

void	sort(t_stack **st_a, t_stack **st_b, t_oplst **oplst)
{
	int	length;

	length = stack_length(*st_a);
	if (length == 3)
		sort_three(st_a, oplst);
	else if (length <= 5)
		sort_five(st_a, st_b, oplst);
	else
		big_sort(st_a, st_b, oplst);
}
