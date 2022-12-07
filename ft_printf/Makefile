# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: jofilipe <jofilipe@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/12/07 10:29:29 by jofilipe          #+#    #+#              #
#    Updated: 2022/12/07 10:35:02 by jofilipe         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRC = ft_checkconversion.c \
		ft_printf.c \
		ft_printf_char.c \
		ft_printf_digit.c \
		ft_printf_pointer.c \
		ft_printf_string.c \
		ft_printf_unsigned.c \
		ft_printf_hexa.c \

SRC_OBJ = $(SRC:.c=.o)

NAME = libftprintf.a
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
