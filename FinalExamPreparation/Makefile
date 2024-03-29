NAME = libft.a

CC = cc
CFLAGS = -Wall -Wextra -Werror

INCLUDES_DIR = include
SRCS_DIR = srcs
OBJS_DIR = $(SRCS_DIR)

SRCS = srcs/ft_ft.cc
OBJS = $(SRCS:.c=.o)

$(OBJS_DIR)/%.o: $(SRCS_DIR)/%.cc
	$(CC) $(CFLAGS) -I$(INCLUDES_DIR) -c $< -o $@

$(NAME): $(OBJS)
	ar rc $(NAME) $(OBJS)

all: $(NAME)

clean:
	rm -f $(OBJS)

flean: clean
	rm -f $(NAME)

re: fclean all