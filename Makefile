# **************************************************************************** #
#                                                                              #
#                                                     _.._  .           .      #
#    Makefile                                       .' .-'`        *           #
#                                                  /  /       +        *       #
#    By: ldel-val <ldel-val@42madrid.com>          |  |           *            #
#                                                  \  '.___.;       +          #
#    Created: 2024/11/25 12:45:41 by ldel-val       '._  _.'   .        .      #
#    Updated: 2024/12/28 02:13:54 by ldel-val          ``                      #
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
			src/sort.c\
			src/check.c\
			src/linked_lists/add_remove.c\
			src/linked_lists/create_delete.c\
			src/linked_lists/get_node.c\
			src/linked_lists/stack_operations.c\
			src/linked_lists/other.c\
			src/utils/format.c\
			src/utils/numeric.c\
			src/operations/push.c\
			src/operations/swap.c\
			src/operations/rotate.c\
			src/operations/reverse_rotate.c
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
