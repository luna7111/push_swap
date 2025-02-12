# **************************************************************************** #
#                                                                              #
#                                                     _.._  .           .      #
#    Makefile                                       .' .-'`        *           #
#                                                  /  /       +        *       #
#    By: ldel-val <ldel-val@42madrid.com>          |  |           *            #
#                                                  \  '.___.;       +          #
#    Created: 2024/11/25 12:45:41 by ldel-val       '._  _.'   .        .      #
#    Updated: 2025/02/12 23:22:33 by ldel-val          ``                      #
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
			src/aux.c\
			src/populate.c\
			src/sort_small_stack.c\
			src/complex_operations.c\
			src/linked_lists/oplst/add.c\
			src/linked_lists/oplst/clear.c\
			src/linked_lists/oplst/print.c\
			src/linked_lists/stack/add_remove.c\
			src/linked_lists/stack/create_delete.c\
			src/linked_lists/stack/node_access.c\
			src/linked_lists/stack/other.c\
			src/linked_lists/stack/clean.c\
			src/linked_lists/stack/stack_operations.c\
			src/operations/push.c\
			src/operations/reverse_rotate.c\
			src/operations/rotate.c\
			src/operations/swap.c
OBJ		:=	$(SRC:.c=.o)

#-----------------------------------------------------------------------------#
#                                    Rules                                    #
#-----------------------------------------------------------------------------#

all: $(NAME)

$(LIBFT):
	$(MAKE) -C libft

$(MLX):
	$(MAKE) -C mlx

$(NAME): $(OBJ) $(LIBFT) $(MLX)
	$(CC) $(CFLAGS) $(OBJ) $(LIB) -o $(NAME) 

clean:
	$(MAKE) -C libft fclean
	$(RM) $(OBJ)

fclean:
	$(MAKE) -C libft fclean
	$(RM) $(OBJ)
	$(RM) $(NAME)

re: fclean $(NAME)

.PHONY: all clean fclean re
