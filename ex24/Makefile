# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: fkante <marvin@42.fr>                      +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2019/04/02 17:03:16 by fkante            #+#    #+#              #
#    Updated: 2019/04/03 11:30:01 by fkante           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

TARGET = libft.a
CC = gcc
CFLAGS = -Wall -Wextra -Werror
FSRC = ./srcs/
FHDR = ./includes/
SRCS = $(FSRC)ft_putchar.c\
	   $(FSRC)ft_putstr.c\
	   $(FSRC)ft_strcmp.c\
	   $(FSRC)ft_strlen.c\
	   $(FSRC)ft_swap.c
HDR = $(FHDR)ft_headers.h
OPT = -c -I $(iHDR)
OBJ = ft_putchar.o\
	  ft_putstr.o\
	  ft_strcmp.o\
	  ft_strlen.o\
	  ft_swap.o

all: $(TARGET)

$(TARGET):
	CC $(OPT) $(CFLAGS) $(SRCS)
	ar rc $(TARGET) $(OBJ)

clean:
	rm -f *.o

fclean: clean
	rm -f $(TARGET)

re: fclean all
