/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   example.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yabukirento <yabukirento@student.42.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/25 13:20:16 by yabukirento       #+#    #+#             */
/*   Updated: 2024/03/26 17:06:36 by yabukirento      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft.h"

int ft_length(char *str)
{
	int	i;

	i = 0;
	while(str[i])
		i++;
	return (i);
}

char	*ft_strdup(char *src)
{
	int		i;
	int		len;
	char	*dest;
	char	*src_copy;

	len = 0;
	src_copy = src;
	while (*src)
	{
		len++;
		src++;
	}
	dest = (char *)malloc((len + 1) * sizeof(char));
	if (dest == NULL)
		return (NULL);
	i = 0;
	while (i < len)
	{
		dest[i] = src_copy[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}


void ft_strcpy(char *dest, char *src)
{
	int i;

	i = 0;
	while(dest[i] && src[i])
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
}

int	ft_convert(MapInfo map_info)
{
	int i;
	int j;

	i = 0;
	while (i < map_info.rows)
	{
		j = 0;
		while (j < ft_length(map_info.map[0]))
		{
			if (map_info.map[i][j] == map_info.empty)
				map_info.nbrmap[i][j] = 1;
			else if (map_info.map[i][j] == map_info.obstacle)
				map_info.nbrmap[i][j] = 0;
			else
				return (1);
			j++;
		}
		i++;
	}
	return (0);
}

void	ft_print_map(MapInfo map_info)
{
	int	i;
	int j;

	i = 0;
	while (i < map_info.rows)
	{
		j = 0;
		while (j < ft_length(map_info.map[0]))
		{
			if (map_info.nbrmap[i][j] == 0)
				write(1, &map_info.obstacle, 1);
			else if ((i <= map_info.y_max && i > map_info.y_max - map_info.max) && (j <= map_info.x_max && j > map_info.x_max - map_info.max))
				write(1, &map_info.full, 1);
			else
				write(1, &map_info.empty, 1);
			j++;
		}
		write(1,"\n",1);
		i++;
	}
}

void	ft_set_map(MapInfo map_info, int i, int j)
{
	//0の時は問答無用で0
	if (map_info.nbrmap[i][j] == 0)
		map_info.nbrmap[i][j] = 0;
	//左上の数字から+1できるか確認
	else if (map_info.nbrmap[i - 1][j - 1] <= map_info.nbrmap[i][j - 1] && map_info.nbrmap[i - 1][j - 1] <= map_info.nbrmap[i - 1][j])
		map_info.nbrmap[i][j] = map_info.nbrmap[i - 1][j - 1] + 1;
	//できなければ上と左の小さい方から+1した数を入れる
	else if (map_info.nbrmap[i][j - 1] < map_info.nbrmap[i - 1][j])
		map_info.nbrmap[i][j] = map_info.nbrmap[i][j - 1] + 1;
	else
		map_info.nbrmap[i][j] = map_info.nbrmap[i - 1][j] + 1;
}

int	ft_search(MapInfo map_info)
{
	int	i;
	int j;

	i = 1;
	map_info.max = 1;
	while (i < map_info.rows)
	{
		j = 1;
		while(j < ft_length(map_info.map[0]))
		{
			ft_set_map(map_info, i, j);
			if ((map_info.max == map_info.nbrmap[i][j] && map_info.y_max < i) || (map_info.max < map_info.nbrmap[i][j]))
			{
				map_info.x_max = j;
				map_info.y_max = i;
				map_info.max = map_info.nbrmap[i][j];
			}
			j++;
		}
		i++;
	}
	ft_print_map(map_info);
	return (0);
}

int main(int argc, char *argv[])
{
	MapInfo map_info = {0}; // 初期化
	ft_file(mapinfo, argv[1]);

	map_info.rows = 9;
	map_info.empty = '.';
	map_info.obstacle = 'o';
	map_info.full = 'x';

    // map_info.map の各要素にメモリを割り当てる
	map_info.map = (char **)malloc(map_info.rows * sizeof(char *));
	if (map_info.map == NULL) {
		fprintf(stderr, "Error: Memory allocation failed\n");
		return EXIT_FAILURE;
	}
	for (int i = 0; i < map_info.rows; i++) {
		map_info.map[i] = (char *)malloc((map_info.rows + 1) * sizeof(char));
		if (map_info.map[i] == NULL) {
			fprintf(stderr, "Error: Memory allocation failed\n");
			return EXIT_FAILURE;
		}
	}

	//ファイルからの上読み込みに置き換える
	map_info.map[0] = ft_strdup("...........................");
	map_info.map[1] = ft_strdup("....o......................");
	map_info.map[2] = ft_strdup("............o..............");
	map_info.map[3] = ft_strdup("...........................");
	map_info.map[4] = ft_strdup("....o......................");
	map_info.map[5] = ft_strdup("...............o...........");
	map_info.map[6] = ft_strdup("...........................");
	map_info.map[7] = ft_strdup("......o..............o.....");
	map_info.map[8] = ft_strdup("..o.......o................");

	// nbrmap のメモリを割り当てる
	map_info.nbrmap = (int **)malloc(map_info.rows * sizeof(int *));
	if (map_info.nbrmap == NULL)
		return (-1);

	//nbrmapの横の長さ分のメモリを行ごとに確保する
	int i = 0;
	while (i < map_info.rows)
	{
		map_info.nbrmap[i] = (int *)malloc(ft_length(map_info.map[0]) * sizeof(int));
		if (map_info.nbrmap[i] == NULL)
			return (-1);
		i++;
	}
    // マップ情報を出力（消すのでfor文、printfのままでOK）
    for (int i = 0; i < map_info.rows; i++)
        printf("[%s]\n", map_info.map[i]);

	//マップを０１に変換
	if(ft_convert(map_info) != 0)
		return (1);
	//変換したマップを表示して確認（消すのでfor文、printfのままでOK）
	for (int i = 0; i < map_info.rows; i++)
	{
		for (int j = 0; j < ft_length(map_info.map[0]); j++)
        	printf("[%d]", map_info.nbrmap[i][j]);
		printf("\n");
    }
	//最大の正方形を探索して表示させる
	if(ft_search(map_info) != 0)
		return (1);
	//最終盤面の確認（消すのでfor文、printfのままでOK）
	for (int i = 0; i < map_info.rows; i++)
	{
		for (int j = 0; j < ft_length(map_info.map[0]); j++)
        	printf("[%d]", map_info.nbrmap[i][j]);
		printf("\n");
    }
	return (0);
}