SRC = ft_checkconversion.c \
		ft_printf.c \
		ft_printf_char.c \
		ft_printf_digit.c \
		ft_printf_pointer.c \
		ft_printf_string.c \
		ft_printf_unsigned.c \
		ft_printf_hexa.c \

SRC_OBJ = $(SRC:.c=.o)

NAME = ???????????????
CC = cc
CFLAGS = -Wall -Wextra -Werror

all: $(NAME)

$(NAME): $(SRC_OBJ)
	ar rcs $(NAME) $(SRC_OBJ)

clean:
	rm -f $(SRC_OBJ)

fclean: clean
	rm -f $(NAME)

re: fclean all
