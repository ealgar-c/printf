NAME = libftprintf.a
NAME_b = libftprintf_bonus.a

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

SRC_DIR_B = src_bonus/
SRC_B =	ft_printf_bonus.c

OBJ_DIR_B = objs_bonus/
OBJ_B = $(addprefix $(OBJ_DIR_B), $(SRC_b:.c=.o))

CC = gcc

CFLAGS = -Wall -Wextra -Werror

LIB = ar rcs

all: $(NAME)

$(NAME): $(OBJ)
	@ $(LIB) $(NAME) $(OBJ)

$(OBJ_DIR)%.o: $(SRC_DIR)%.c
	@ mkdir -p $(OBJ_DIR)
	$(CC) $(CFLAGS) -I ./include -c $< -o $@

bonus: $(NAME_B)

$(NAME_B): $(OBJ_B)
	@ $(LIB) $(NAME_B) $(OBJ_B)

$(OBJ_DIR_B)%.o: $(SRC_DIR_B)%.c
	@ mkdir -p $(OBJ_DIR_B)
	$(CC) $(CFLAGS) -I ./include_bonus -c $< -o $@


clean:
	rm -rf $(OBJ_DIR)

fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY: re all clean fclean bonus