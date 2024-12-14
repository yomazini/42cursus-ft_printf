# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ymazini <ymazini@student.42.fr>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/11/29 16:49:15 by ymazini           #+#    #+#              #
#    Updated: 2024/11/29 16:49:18 by ymazini          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CC = cc

CFLAGS = -Wall -Wextra -Werror

HEADER = ft_printf.h

NAME = libftprintf.a

SRC = ft_printf.c ft_putunbr_pf.c ft_putchar_pf.c ft_putstr_pf.c ft_putnbr_pf.c ft_puthex_pf.c ft_putadr_pf.c

OBJS = $(SRC:.c=.o)

all: $(NAME)

%.o: %.c $(HEADER)
	$(CC) $(CFLAGS) -c $< -o $@

$(NAME): $(OBJS)
	ar -rc $(NAME) $(OBJS)

clean:
	@rm -rf $(OBJS)

fclean: clean
	@rm -rf $(NAME)

re: fclean all

test:all
	$(CC) $(CFLAGS) main.c $(NAME) -o  myprogram  && ./myprogram
	
