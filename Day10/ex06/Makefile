# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: jblack-b <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2018/09/29 14:12:22 by jblack-b          #+#    #+#              #
#    Updated: 2018/09/30 23:13:46 by jblack-b         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #
NAME = do-op
SRC = srcs/ft_putchar.c srcs/ft_atoi.c srcs/ft_putnbr.c srcs/ft_strlen.c \
	srcs/ft_putstr.c
INCLUDES = include/ 
CFLAGS = -Wall -Wextra -Werror

all:
	gcc $(CFLAGS) -o $(NAME) main.c $(SRC) -I $(INCLUDES)

clean:
		/bin/rm -f ft_atoi.o ft_putnbr.o

fclean: clean
		/bin/rm -f $(NAME)

re: fclean all
