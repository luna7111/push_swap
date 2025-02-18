/* ************************************************************************** */
/*                                                                            */
/*                                                    _.._  .           .     */
/*   push_swap.h                                    .' .-'`        *          */
/*                                                 /  /       +        *      */
/*   By: ldel-val <ldel-val@student.42madrid.com>  |  |           *           */
/*                                                 \  '.___.;       +         */
/*   Created: 2025/02/16 16:06:16 by ldel-val       '._  _.'   .        .     */
/*   Updated: 2025/02/18 17:41:07 by ldel-val          ``                     */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include "../libft/libft.h"

# define SA 1
# define SB 2
# define SS 3
# define PA 4
# define PB 5
# define RA 6
# define RB 7
# define RR 8
# define RRA 9
# define RRB 10
# define RRR 11

typedef struct s_stack
{
	int				nb;
	int				ind;
	struct s_stack	*nx;
	struct s_stack	*pr;
}	t_stack;
//If you add more data inside the struct, remember to update operations.c :)

typedef struct s_oplist
{
	int				op;
	struct s_oplist	*nx;
}	t_oplst;
//Operations aren't directly written on STDOUT so redundant operations can be
//omitted

//sort
void	sort(t_stack **st_a, t_stack **st_b, t_oplst **oplst);
void	sort_three(t_stack **st, t_oplst **oplst);
void	sort_five(t_stack **a, t_stack **b, t_oplst **oplst);
void	big_sort(t_stack **a, t_stack **b, t_oplst **oplst);
//operations
void	o_pa(t_stack **stack_a, t_stack **stack_b, t_oplst **oplst);
void	o_pb(t_stack **stack_a, t_stack **stack_b, t_oplst **oplst);
void	o_rra(t_stack **stack, t_oplst **oplst);
void	o_rrb(t_stack **stack, t_oplst **oplst);
void	o_rrr(t_stack **stack_a, t_stack **stack_b, t_oplst **oplst);
void	o_ra(t_stack **stack, t_oplst **oplst);
void	o_rb(t_stack **stack, t_oplst **oplst);
void	o_rr(t_stack **stack_a, t_stack **stack_b, t_oplst **oplst);
void	o_sa(t_stack **stack, t_oplst **oplst);
void	o_sb(t_stack **stack, t_oplst **oplst);
void	o_ss(t_stack **stack_a, t_stack **stack_b, t_oplst **oplst);

//aux
void	error(t_stack **stack, char **split);
int		sqrrt(int nb);

//oplists
void	add_op(t_oplst **list, int op_nb);
void	clear_oplst(t_oplst **list);
void	print_list(t_oplst *list);

//stacks
void	stack_add_front(t_stack **stack, t_stack *node);
void	stack_add_back(t_stack **stack, t_stack *node);
t_stack	*new_node(int nb);
void	delete_node(t_stack **node);
t_stack	*last_node(t_stack *stack);
t_stack	*biggest_node(t_stack *stack);
t_stack	*smallest_node(t_stack *stack);
void	stack_swap(t_stack **stack);
void	stack_push(t_stack **pusher, t_stack **pushee);
void	stack_rotate(t_stack **stack);
void	stack_reverse_rotate(t_stack **stack);
void	clear_stack(t_stack **stack);
t_stack	*populate(int argn, char **argv);
void	indexize(t_stack *stack);
int		stack_length(t_stack *stack);

#endif
