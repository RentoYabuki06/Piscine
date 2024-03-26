CC = cc
CFLAGS = -Wall -Wextra -Werror
TARGET = ft_cat

SRCS = ft_cat.c 
OBJS = $(SRCS.c=.c)

all: $(TARGET)

$(TARGET): $(OBJS)
    $(CC) $(CFLAGS) -o $@ $^

clean:
    rm -f $(OBJ)

fclean: clean
    rm -f $(TARGET)
