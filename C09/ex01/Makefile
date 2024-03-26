# コンパイラとコンパイルオプション
CC = cc
CFLAGS = -Wall -Wextra -Werror

# ソースファイルとオブジェクトファイルのディレクトリ
SRCS_DIR = srcs
OBJS_DIR = $(SRCS_DIR)

# ライブラリ名
LIB_NAME = libft.a

# ソースファイルのリスト
SRCS = $(addprefix $(SRCS_DIR)/, ft_putchar.c ft_swap.c ft_putstr.c ft_strlen.c ft_strcmp.c)

# オブジェクトファイルのリスト
OBJS = $(SRCS:%.c=%.o)

# ヘッダーファイルのディレクトリ
INCLUDES_DIR = includes

# コンパイルルール
$(OBJS_DIR)/%.o: $(SRCS_DIR)/%.c
	$(CC) $(CFLAGS) -I$(INCLUDES_DIR) -c $< -o $@ 

# ライブラリの作成ルール（依存関係。OBJSに修正あればライブラリを再ビルドしてね）
$(LIB_NAME): $(OBJS)
	ar rc $(LIB_NAME) $(OBJS)

# ターゲットルール（指定ライブラリがビルドされる）
all: $(LIB_NAME)

# cleanルール
clean:
	rm -f $(OBJS)

# fcleanルール
fclean: clean
	rm -f $(LIB_NAME)

# reルール（fcleanの後にall）
re: fclean all
