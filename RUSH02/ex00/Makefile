# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: yuotsubo <yuotsubo@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/03/23 02:32:54 by yuotsubo          #+#    #+#              #
#    Updated: 2024/03/23 11:47:14 by yuotsubo         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = rush-02
SRCS = ./src/main.c \
		./
OBJS = $(SRCS:.c=.o)
INCLUDE = -I./includes
CC = cc
CFLAGS = -Wall -Wextra -Werror
SEGVFLAGS = -fsanitize=address

all : $(NAME)

$(NAME) : $(OBJS)
	$(CC) $(CFLAGS) -o $(NAME)

$(OBJS) : $(SRCS)
	$(CC)  $(CFLAGS) $(INCLUDE) -c $< -o $@

clean :
	$(RM) $(OBJS)

fclean : clean
	$(RM) $(NAME)

re : fclean all
