# Name of the library file
NAME = libft.a
# Compiler to use
CC = cc
# Flags to use when compiling
CFLAGS = -Wall -Wextra -Werror -g3 -I.
# Archiver to use
AR = ar
# Flags to use when archiving
ARFLAGS = -rc
# Command to use to remove files
RM = rm -f
# List of all the .c files for the library
SRC = char/ft_isalpha.c\
char/ft_isdigit.c\
char/ft_isalnum.c\
char/ft_isascii.c\
char/ft_isprint.c\
string/ft_strlen.c\
memory/ft_memset.c\
memory/ft_memmove.c\
deprecated/ft_bzero.c\
memory/ft_memcpy.c\
string/ft_strlcpy.c\
string/ft_strlcat.c\
char/ft_toupper.c\
char/ft_tolower.c\
string/ft_strchr.c\
string/ft_strrchr.c\
string/ft_strncmp.c\
memory/ft_memchr.c\
memory/ft_memcmp.c\
string/ft_strnstr.c\
conversion/ft_atoi.c\
memory/ft_calloc.c\
string/ft_strdup.c\
string/ft_substr.c\
string/ft_strjoin.c\
string/ft_strtrim.c\
string/ft_split.c\
string/ft_strappend.c\
conversion/ft_itob.c\
conversion/ft_itoa.c\
string/ft_strmapi.c\
string/ft_striteri.c\
io/output/ft_putchar_fd.c\
io/output/ft_putstr_fd.c\
io/output/ft_putendl_fd.c\
io/output/ft_putnbr_fd.c\
io/output/ft_putunbr_fd.c\
io/output/ft_puthex_fd.c\
io/output/ft_putuphex_fd.c\
io/output/ft_putoct_fd.c\
io/output/ft_putptr_fd.c\
io/input/ft_get_next_line.c\
lists/ft_lstnew_bonus.c\
lists/ft_lstadd_front_bonus.c\
lists/ft_lstsize_bonus.c\
lists/ft_lstlast_bonus.c\
lists/ft_lstadd_back_bonus.c\
lists/ft_lstdelone_bonus.c\
lists/ft_lstclear_bonus.c\
lists/ft_lstiter_bonus.c\
lists/ft_lstmap_bonus.c\
io/output/ft_printf.c\
memory/free_strarray.c

OBJ = $(SRC:.c=.o)


all: $(NAME)

$(NAME): $(OBJ)
		$(AR) $(ARFLAGS) $(NAME) $(OBJ)

clean:
		rm -f $(OBJ) $(BONUS_OBJ)

fclean: clean
		rm -f $(NAME)

re: fclean all

.PHONY: all re clean fclean
