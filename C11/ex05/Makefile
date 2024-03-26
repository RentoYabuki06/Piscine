NAME = do-op

CC = cc
CFLAGS = -Wall -Wextra -Werror

SRCS = do-op.c ft_atoi.c ft_function.c
OBJS = $(SRCS:.c=.o)

all: $(NAME)

$(NAME): $(OBJS)
	$(CC) $(CFLAGS) $(OBJS) -o $(NAME)

clean:
	rm -f $(OBJ)

fclean: clean
	rm -f $(NAME)

re: fclean all
