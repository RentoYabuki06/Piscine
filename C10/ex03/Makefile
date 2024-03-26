CC = cc
CFLAGS = -Wall -Wextra -Werror

SRCS = ft_hexdump.cc
OBJS = $(SRCS:.c=.o)
EXEC = ft_hexdump

all: $(EXEC)

$(EXEC): $(OBJS)
	$(CC) $(CFLAGS) -o $@ $^

clean: rm -f $(OBJS)

fclean: rm -f $(EXEC)