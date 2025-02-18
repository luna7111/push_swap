# **************************************************************************** #
#                                                                              #
#                                                     _.._  .           .      #
#    Makefile                                       .' .-'`        *           #
#                                                  /  /       +        *       #
#    By: ldel-val <ldel-val@42madrid.com>          |  |           *            #
#                                                  \  '.___.;       +          #
#    Created: 2024/11/25 12:45:41 by ldel-val       '._  _.'   .        .      #
#    Updated: 2025/02/18 18:10:02 by ldel-val          ``                      #
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
			src/aux/error.c\
			src/aux/math.c\
			src/linked_lists/oplist/add.c\
			src/linked_lists/oplist/clear.c\
			src/linked_lists/oplist/print.c\
			src/linked_lists/stacks/add_remove.c\
			src/linked_lists/stacks/clear.c\
			src/linked_lists/stacks/create_delete.c\
			src/linked_lists/stacks/get_node.c\
			src/linked_lists/stacks/indexize.c\
			src/linked_lists/stacks/operations.c\
			src/linked_lists/stacks/populate.c\
			src/linked_lists/stacks/other.c\
			src/sort/operations/push.c\
			src/sort/operations/reverse_rotate.c\
			src/sort/operations/rotate.c\
			src/sort/operations/swap.c\
			src/sort/sort.c\
			src/sort/small_sort.c\
			src/sort/big_sort.c
OBJ		:=	$(SRC:.c=.o)

#Bonus stuff

BONUS_NAME	:=	checker
BONUS_SRC	:=	src/checker/checker.c

#-----------------------------------------------------------------------------#
#                                    Rules                                    #
#-----------------------------------------------------------------------------#

all: $(NAME) $(BONUS_NAME)

$(LIBFT):
	$(MAKE) -C libft

$(MLX):
	$(MAKE) -C mlx

$(NAME): $(OBJ) $(LIBFT)
	$(CC) $(CFLAGS) $(OBJ) $(LIB) -o $(NAME) 

$(BONUS_NAME): $(OBJ) $(LIBFT)
	$(CC) $(CFLAGS) $(OBJ) $(LIB) -o $(BONUS_NAME) 

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
