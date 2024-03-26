#ifndef FT_H
# define FT_H

# include <stdio.h>
# include <stdlib.h>
# include <unistd.h>
# include <fcntl.h>


typedef struct s_mapinfo
{
	struct s_mapinfo	*next;		//次の構造体
    int					rows;		// マップの行数
    char				empty;		// "empty"の文字
    char				obstacle;	// "obstacle"の文字
    char				full;		// "full"の文字
    char				**map;		// マップ情報のポインタ
	int					**nbrmap;	//数字に置き換えたマップ情報のポインタ
	int					max;		//一番の大きな正方形の辺の長さ
	int					x_max;		//maxのxの位置
	int					y_max;		//maxのyの位置
} MapInfo;

#endif