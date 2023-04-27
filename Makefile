NAME = libftprintf.a

SOURCE = ft_printchar.c\
		ft_printdec.c\
		ft_printf.c\
		ft_printhexa.c\
		ft_printptr.c\
		ft_printstring.c\
		ft_printunsigned.c\
		ft_putchar.c

OBJ = $(SOURCE:.c=.o)

CC = gcc

CFLAGS = -Wall -Wextra -Werror

LIB = ar rcs

all: $(NAME)

$(NAME): $(OBJ)
	$(LIB) $(NAME) $(OBJ)

$(OBJ): $(SOURCE)
	$(CC) $(CFLAGS) -c $(SOURCE)

clean:
	rm -f $(OBJ)

fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY: re all clean fclean