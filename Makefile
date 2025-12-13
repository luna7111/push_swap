# **************************************************************************** #
#                                                                              #
#                                                     _.._  .           .      #
#    Makefile                                       .' .-'`        *           #
#                                                  /  /       +        *       #
#    By: ldel-val <ldel-val@42madrid.com>          |  |           *            #
#                                                  \  '.___.;       +          #
#    Created: 2024/11/25 12:45:41 by ldel-val       '._  _.'   .        .      #
#    Updated: 2025/02/18 18:21:12 by ldel-val          ``                      #
#                                                                              #
# **************************************************************************** #

#Compiler and linker
CC 		:=	cc

#Remove tool
RM 		:=	rm -f

#Flags
LIBFT	:=	libft/libft.a
CFLAGS 	:=	-Wall -Wextra -Werror -g3 -Isrc
LIB 	:=	$(LIBFT)

#Project stuff 

NAME 	:=	push_swap
SRC 	:=	src/push_swap.c\
			src/auxiliary/error.c\
			src/auxiliary/math.c\
			src/linked_list_implementation/oplist/add.c\
			src/linked_list_implementation/oplist/clear.c\
			src/linked_list_implementation/oplist/print.c\
			src/linked_list_implementation/stacks/add_remove.c\
			src/linked_list_implementation/stacks/clear.c\
			src/linked_list_implementation/stacks/create_delete.c\
			src/linked_list_implementation/stacks/get_node.c\
			src/linked_list_implementation/stacks/indexize.c\
			src/linked_list_implementation/stacks/operations.c\
			src/linked_list_implementation/stacks/populate.c\
			src/linked_list_implementation/stacks/other.c\
			src/push_swap_stack_operations/push.c\
			src/push_swap_stack_operations/reverse_rotate.c\
			src/push_swap_stack_operations/rotate.c\
			src/push_swap_stack_operations/swap.c\
			src/sorting_algorithms/sort.c\
			src/sorting_algorithms/small_sort.c\
			src/sorting_algorithms/ksort.c
OBJ		:=	$(SRC:.c=.o)

#-----------------------------------------------------------------------------#
#                                    Rules                                    #
#-----------------------------------------------------------------------------#

all: $(NAME)

$(LIBFT):
	$(MAKE) -C libft

$(MLX):
	$(MAKE) -C mlx

$(NAME): $(OBJ) $(LIBFT)
	$(CC) $(CFLAGS) $(OBJ) $(LIB) -o $(NAME) 

clean:
	$(MAKE) -C libft fclean
	$(RM) $(OBJ)
	$(RM) $(BONUS_OBJ)

fclean:
	$(MAKE) -C libft fclean
	$(RM) $(OBJ)
	$(RM) $(BONUS_OBJ)
	$(RM) $(NAME)
	$(RM) $(BONUS_NAME)

re: fclean $(NAME)

.PHONY: all clean fclean re
