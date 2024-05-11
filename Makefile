NAME = libftprintf.a

SRC_DIR = src/
SRC =	ft_printchar.c\
		ft_printdec.c\
		ft_printf.c\
		ft_printhexa.c\
		ft_printptr.c\
		ft_printstring.c\
		ft_printunsigned.c\
		ft_putchar.c

OBJ_DIR = objs/
OBJ = $(addprefix $(OBJ_DIR), $(SRC:.c=.o))

CC = gcc

CFLAGS = -Wall -Wextra -Werror -I ./include

LIB = ar rcs

all: $(NAME)

$(NAME): $(OBJ)
	@ $(LIB) $(NAME) $(OBJ)

$(OBJ_DIR)%.o: $(SRC_DIR)%.c
	@ mkdir -p $(OBJ_DIR)
	$(CC) $(CFLAGS) -c $< -o $@


clean:
	rm -rf $(OBJ_DIR)

fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY: re all clean fclean