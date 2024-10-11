# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: gcosta-m <gcosta-m@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/10/11 13:18:08 by gcosta-m          #+#    #+#              #
#    Updated: 2024/10/11 13:21:08 by gcosta-m         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = ft_display_file
SRC = ft_display_file.c
OBJ = ft_display_file.o
CC = gcc
FLAGS = -Wall -Wextra -Werror

all: $(NAME)
	$(CC) -c $(FALGS) $(SRC)
	$(CC) -o $(NAME) $(OBJ)

clean:
	rm -f $(OBJ)

fclean: clean
	rm -f $(NAME)

re : fclean all

