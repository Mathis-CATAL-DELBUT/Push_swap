# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: mcatal-d <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/12/28 17:18:05 by mcatal-d          #+#    #+#              #
#    Updated: 2022/12/30 17:36:54 by mcatal-d         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = push_swap
SRCS = deplacement/s.c deplacement/p.c deplacement/r.c deplacement/rr.c push_swap.c tableau.c \
		pretrie.c trifinal.c cout_tri.c free.c check.c
OBJS = $(SRCS:.c=.o)
PTO = *.o

CC = gcc
RM = rm -f
CFLAGS =  -g3 #-Wall -Wextra -Werror

all: $(NAME)

$(NAME):        $(OBJS) push_swap.h
				$(CC) $(CFLAGS) -c $(SRCS)
				$(CC) -o $(NAME) $(OBJS)
clean:
			$(RM) $(OBJS) $(PTO)
fclean: clean
			$(RM) $(NAME)
re : fclean $(NAME)

.PHONY: all clean fclean re
