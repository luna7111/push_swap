/* ************************************************************************** */
/*                                                                            */
/*                                                    _.._  .           .     */
/*   push_swap.h                                    .' .-'`        *          */
/*                                                 /  /       +        *      */
/*   By: ldel-val <ldel-val@student.42madrid.com>  |  |           *           */
/*                                                 \  '.___.;       +         */
/*   Created: 2024/12/25 21:32:16 by ldel-val       '._  _.'   .        .     */
/*   Updated: 2024/12/28 02:11:22 by ldel-val          ``                     */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include <stdio.h>
# include "../libft/libft.h"

typedef struct s_stack
{
	int		nb;
	struct	s_stack *next;
}	t_stack;

void	error(int n);

void	node_add_front(t_stack **list, t_stack *node);
void	node_add_back(t_stack **list, t_stack *node);
void	remove_node(t_stack **node);

t_stack	*new_node(int nb);
void	delete_node(t_stack *node);

t_stack *last_node(t_stack *stack);
t_stack *nth_node(t_stack *node, int index);
t_stack	*next_to_last_node(t_stack *node);
size_t	stack_size(t_stack *stack);
size_t	node_position(t_stack *stack, t_stack *node);

void	stack_swap(t_stack **stack);
void	stack_push(t_stack **pusher, t_stack **pushee);
void	stack_rotate(t_stack **stack);
void	stack_reverse_rotate(t_stack **stack);

int	str_is_int(char *str);

t_stack	*median_of_three(t_stack *start, t_stack *end);

int		section_is_smaller(t_stack *start, t_stack *end, int nb);
int		section_is_bigger(t_stack *start, t_stack *end, int nb);
int		is_ordered(t_stack *stack);
void	check_stack(t_stack *stack);

void	o_sa(t_stack **stack);
void	o_sb(t_stack **stack);
void	o_ss(t_stack **stack_a, t_stack **stack_b);
void	o_pa(t_stack **stack_a, t_stack **stack_b);
void	o_pb(t_stack **stack_a, t_stack **stack_b);
void	o_ra(t_stack **stack);
void	o_rb(t_stack **stack);
void	o_rr(t_stack **stack_a, t_stack **stack_b);
void	o_rra(t_stack **stack);
void	o_rrb(t_stack **stack);
void	o_rrr(t_stack **stack_a, t_stack **stack_b);

void	sort(t_stack **sa, t_stack **sb);

#endif
