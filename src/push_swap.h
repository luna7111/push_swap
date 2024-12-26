/* ************************************************************************** */
/*                                                                            */
/*                                                    _.._  .           .     */
/*   push_swap.h                                    .' .-'`        *          */
/*                                                 /  /       +        *      */
/*   By: ldel-val <ldel-val@student.42madrid.com>  |  |           *           */
/*                                                 \  '.___.;       +         */
/*   Created: 2024/12/25 21:32:16 by ldel-val       '._  _.'   .        .     */
/*   Updated: 2024/12/26 22:00:33 by ldel-val          ``                     */
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

void	node_add_front(t_stack **list, t_stack *node);
void	node_add_back(t_stack **list, t_stack *node);
void	remove_node(t_stack **node);

t_stack	*new_node(int nb);
void	delete_node(t_stack *node);

t_stack *last_node(t_stack *list);
t_stack *nth_node(t_stack *node, int index);
t_stack	*next_to_last_node(t_stack *node);

void	stack_swap(t_stack **stack);
void	stack_push(t_stack **pusher, t_stack **pushee);
void	stack_rotate(t_stack **stack);
void	stack_reverse_rotate(t_stack **stack);

int	str_is_int(char *str);
#endif
