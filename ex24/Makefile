# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: gcosta-m <gcosta-m@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/10/11 13:18:14 by gcosta-m          #+#    #+#              #
#    Updated: 2024/10/11 13:37:50 by gcosta-m         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a
SRC = srcs/ft_putchar.c \
	  srcs/ft_putstr.c \
	  srcs/ft_strcmp.c \
	  srcs/ft_strlen.c \
	  srcs/ft_swap.c
INCLUDES = ./includes/
OBJECTS = ft_putchar.o \
	  ft_putstr.o \
	  ft_strcmp.o \
	  ft_strlen.o \
	  ft_swap.o
CC = gcc

all : $(NAME)

$(NAME) : 
	$(CC) -c $(SRC) -I $(INCLUDES)
	ar rc $(NAME) $(OBJECTS)

clean :
	rm -f $(OBJECTS)

fclean : clean
	rm -f $(NAME)

re : fclean all