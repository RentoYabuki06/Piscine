#ifndef FT_H
# define FT_H

# include <stdio.h>
# include <stdlib.h>
# include <unistd.h>
# include <fcntl.h>
// マップ情報を含む5つの構造体
typedef struct {
    int rows;            // マップの行数
    char empty;          // "empty"の文字
    char obstacle;       // "obstacle"の文字
    char full;           // "full"の文字
    char **map;  // マップ情報
} MapInfo;

#endif