# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: pstuart <marvin@42.fr>                     +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/03/30 11:03:03 by pstuart           #+#    #+#              #
#    Updated: 2022/03/30 11:03:05 by pstuart          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libftprintf.a
FLAGS = -Wall -Wextra -Werror
LIBFT = ./Libft/
LIBFT_A = ./Libft/libft.a
OBJS = $(SRCS:.c=.o)
SRCS = 	source/ft_printf.c  \
		source/ft_hexlen.c \
		source/ft_numlen.c \
		source/ft_printhex.c \
		source/ft_printid.c \
		source/ft_printp.c \
		source/ft_printu.c \
		source/ft_ptrlen.c \
		source/ft_puthex.c \
		source/ft_putptr.c \

%o: %.c
	gcc -c $(FLAGS) -g -c $< -o $(<:.c=.o)

$(NAME): $(OBJS)
	make -C $(LIBFT)
	cp $(LIBFT_A) $(NAME)
	ar -rcs $(NAME) $(OBJS)

all: $(NAME)

clean:
	make clean -C $(LIBFT)
	rm -rf $(OBJS)

fclean: clean
	rm -rf $(NAME) $(LIBFT_A)

re: fclean all

.PHONY: all, clean, fclean, re