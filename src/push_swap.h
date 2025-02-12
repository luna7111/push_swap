/* ************************************************************************** */
/*                                                                            */
/*                                                    _.._  .           .     */
/*   push_swap.h                                    .' .-'`        *          */
/*                                                 /  /       +        *      */
/*   By: ldel-val <ldel-val@student.42madrid.com>  |  |           *           */
/*                                                 \  '.___.;       +         */
/*   Created: 2025/02/11 18:48:42 by ldel-val       '._  _.'   .        .     */
/*   Updated: 2025/02/12 10:47:50 by ldel-val          ``                     */
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
	int				index;
	long			block;
	struct s_stack	*next;
}	t_stack;

typedef struct s_oplst
{
	int				op;
	struct s_oplst	*next;
}	t_oplst;

//linked_lists
//|_stack
// |_add_remove.c
void	stack_add_front(t_stack **stack, t_stack *node);
void	stack_add_back(t_stack **stack, t_stack *node);
// |_create_delete.c
t_stack	*new_node(int nb);
void	delete_node(t_stack **node);
// |_node_access.c
t_stack	*last_node(t_stack *stack);
t_stack	*nth_node(t_stack *node, int index);
t_stack	*next_to_last_node(t_stack *node);
// |_other.c
long	stack_size(t_stack *stack);
long	node_position(t_stack *stack, t_stack *node);
// |_stack_operations.c
void	stack_swap(t_stack **stack);
void	stack_push(t_stack **pusher, t_stack **pushee);
void	stack_rotate(t_stack **stack);
void	stack_reverse_rotate(t_stack **stack);
//|_oplst
// |_add.c
void	add_op(t_oplst **list, int op_nb);
// |_clear.c
void	del_op(t_oplst **operation);
void	clear_oplst(t_oplst **list);
// |_print.c
void	print_list(t_oplst *list);

//aux.c
void	error(void);
int		stack_is_sorted(t_stack stack);

//populate.c
t_stack *populate_stack(int argn, char **argv);

//operations
void	o_pa(t_stack **stack_a, t_stack **stack_b, t_oplst **oplst);
void	o_pb(t_stack **stack_a, t_stack **stack_b, t_oplst **oplst);
void	o_rra(t_stack **stack, t_oplst **oplst);
void	o_rrb(t_stack **stack, t_oplst **oplst);
void	o_rrr(t_stack **stack_a, t_stack **stack_b, t_oplst **oplst);
void	o_ra(t_stack **stack, t_oplst **oplst);
void	o_rb(t_stack **stack, t_oplst **oplst);
void	o_rr(t_stack **stack_a, t_stack **stack_b, t_oplst **oplst);
void	o_ra(t_stack **stack, t_oplst **oplst);
void	o_rb(t_stack **stack, t_oplst **oplst);
void	o_rr(t_stack **stack_a, t_stack **stack_b, t_oplst **oplst);
void	o_sa(t_stack **stack, t_oplst **oplst);
void	o_sb(t_stack **stack, t_oplst **oplst);
void	o_ss(t_stack **stack_a, t_stack **stack_b, t_oplst **oplst);


#endif
