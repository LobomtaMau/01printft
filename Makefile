# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: mbaptist <mbaptist@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/04/18 13:41:54 by mbaptist          #+#    #+#              #
#    Updated: 2023/04/19 17:30:30 by mbaptist         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libftprintf.a

SRCS = 	ft_printf.c ft_putchar_pf ft_putstr_pf ft_putnbr_pf\
		ft_putunint_pf ft_puthex_pf\

OBJS = $(SRCS:.c=.o)

CC = gcc
CFLAGS = -Wall -Wextra -Werror 
AR = AR
ARFLASGS = rcs ////// porque das flags no AR /////
RM = rm -f

all: $(NAME)

$(NAME): $(OBJS)
		$(AR) $(ARFLASGS) $@ $^

%.o: %.c
		$(CC) $(CFLAGS) -c - o $@ $^ -Iinclude

clean:
    $(RM) $(OBJS)

fclean: clean
    $(RM) $(NAME)

re: fclean all

.PHONY: all clean fclean re