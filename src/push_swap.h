/* ************************************************************************** */
/*                                                                            */
/*                                                    _.._  .           .     */
/*   push_swap.h                                    .' .-'`        *          */
/*                                                 /  /       +        *      */
/*   By: ldel-val <ldel-val@student.42madrid.com>  |  |           *           */
/*                                                 \  '.___.;       +         */
/*   Created: 2025/02/16 16:06:16 by ldel-val       '._  _.'   .        .     */
/*   Updated: 2025/02/16 16:10:13 by ldel-val          ``                     */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

typedef struct	s_stack
{
	int				nb;
	int				index;
	struct s_stack	*nx;
	struct s_stack	*pr;
	
}	t_stack;

typedef struct	s_oplist
{
	int				op;
	struct s_oplist *nx;
}

#endif
