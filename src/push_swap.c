/* ************************************************************************** */
/*                                                                            */
/*                                                    _.._  .           .     */
/*   push_swap.c                                    .' .-'`        *          */
/*                                                 /  /       +        *      */
/*   By: ldel-val <ldel-val@student.42madrid.com>  |  |           *           */
/*                                                 \  '.___.;       +         */
/*   Created: 2025/02/11 21:33:50 by ldel-val       '._  _.'   .        .     */
/*   Updated: 2025/02/16 12:42:40 by ldel-val          ``                     */
/*                                                                            */
/* ************************************************************************** */

#include <push_swap.h>

void	quick_sort(t_stack **st_a, t_stack **st_b, t_oplst **oplst)
{
	long	blk_nb;

	blk_nb = 0;
	chop_push(st_a, st_b, &blk_nb, oplst);
	sort_three(st_a, oplst);
	while (!stack_is_sorted(*st_a) || *st_b != NULL)
	{
		if (!stack_is_sorted(*st_a))
		{
			if (stack_is_sorted(nth_node(*st_a, 2)) && (*st_a)->index == (*st_a)->next->index + 1)
				o_sa(st_a, oplst);
			else if (stack_is_sorted(nth_node(*st_a, 3)))
			{
				if (!stack_is_sorted(nth_node(*st_a, 2)))
					sort_first_three(st_a, st_b, oplst);
				else
					block_push_b(st_a, st_b, &blk_nb, oplst);
			}
			else
				block_push_b(st_a, st_b, &blk_nb, oplst);
		}
		else
			block_push_a(st_a, st_b, &blk_nb, oplst);
	}
}

int	main(int argn, char **argv)
{
	t_stack	*stack_a;
	t_stack	*stack_b;
	t_oplst	*oplst;

	stack_b = NULL;
	oplst = NULL;
	stack_a = populate_stack(argn, argv);
	indexize_stack(stack_a);
	quick_sort(&stack_a, &stack_b, &oplst);
	print_list(oplst);
	clear_oplst(&oplst);
	clear_stack(&stack_a);
}
