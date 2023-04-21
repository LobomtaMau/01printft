# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: mbaptist <mbaptist@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/04/18 13:41:54 by mbaptist          #+#    #+#              #
#    Updated: 2023/04/20 17:19:33 by mbaptist         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libftprintf.a

SRCS = 	ft_printf.c 			ft_putchar_pf.c\
				ft_putstr_pf.c 		ft_putnbr_pf.c \
				ft_puthex_pf.c 		ft_putunsigned_pf.c\
				ft_putptr_pf.c\

OBJS = $(SRCS:.c=.o)

CC = gcc
CFLAGS = -Wall -Wextra -Werror 
AR = ar -rcs
RM = rm -f

all: $(NAME)

$(NAME): $(OBJS)
		$(AR) $(NAME) $(OBJS)

clean:
			$(RM) $(OBJS)

fclean: clean
		$(RM) $(NAME)

re: fclean all

run:	re
			$(CC) $(CFLAGS) main.c -L. -lftprintf
			./a.out
			rm -f a.out

.PHONY: all clean fclean re