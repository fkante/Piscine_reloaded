# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: fkante <marvin@42.fr>                      +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2019/04/03 13:52:28 by fkante            #+#    #+#              #
#    Updated: 2019/04/07 14:48:35 by fkante           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

TARGET = ft_display_file
CC = gcc
FLAGS = -Wall -Wextra -Werror
OPTION = -c
SRC = display_file.c

OBJ = display_file.o

all: $(TARGET)

$(TARGET):
	CC $(FLAGS) $(OPTION) $(SRC)
	CC $(OBJ) -o $(TARGET)
clean:
	rm -f $(OBJ)

fclean: clean
	rm -f $(TARGET)

re: fclean all
