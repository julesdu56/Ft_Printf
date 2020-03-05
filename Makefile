# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: jumourot <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2020/01/17 12:18:15 by jumourot          #+#    #+#              #
#    Updated: 2020/03/05 14:49:39 by jumourot         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libftprintf.a

CFLAGS = gcc -Wall -Wextra -Werror

SRCS = 	./src/ft_printf.c\
				./src/ft_treatement.c\
				./src/ft_treatement_char.c\
				./src/ft_treatement_string.c\
				./src/ft_treatement_i_and_d.c\
				./src/main.c

HEADER = include/libftprintf.h

OBJS = $(SRCS:.c=.o)

RM = rm -f

all: $(NAME)

$(NAME): $(OBJS)
	ar -rc $(NAME) $^
	ranlib $(NAME)

%.o:%.c
	 $(CFLAGS) -o $@ -c $<

clean:
	$(RM) $(OBJS)

fclean: clean
	$(RM) $(NAME)

.PHONY:
