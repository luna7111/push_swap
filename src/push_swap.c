/* ************************************************************************** */
/*                                                                            */
/*                                                    _.._  .           .     */
/*   push_swap.c                                    .' .-'`        *          */
/*                                                 /  /       +        *      */
/*   By: ldel-val <ldel-val@student.42madrid.com>  |  |           *           */
/*                                                 \  '.___.;       +         */
/*   Created: 2025/02/17 16:46:22 by ldel-val       '._  _.'   .        .     */
/*   Updated: 2025/02/18 16:07:04 by ldel-val          ``                     */
/*                                                                            */
/* ************************************************************************** */

#include <push_swap.h>

int	main(int argn, char **argv)
{
	t_stack	*st_a;
	t_stack	*st_b;
	t_oplst	*oplst;

	st_b = NULL;
	oplst = NULL;
	st_a = populate(argn, argv);
	indexize(st_a);
	sort(&st_a, &st_b, &oplst);
	clear_stack(&st_a);
	print_list(oplst);
	clear_oplst(&oplst);
}
