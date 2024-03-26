/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   example.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yabukirento <yabukirento@student.42.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/25 13:20:16 by yabukirento       #+#    #+#             */
/*   Updated: 2024/03/25 13:55:15 by yabukirento      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdlib.h>
#include <stdio.h>

typedef struct {
    int rows;            // マップの行数
    char empty;          // "empty"の文字
    char obstacle;       // "obstacle"の文字
    char full;           // "full"の文字
    char **map;          // マップ情報のポインタ
	int	**nbrmap;
} MapInfo;

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
		while (j < map_info.rows)
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
int	ft_search(MapInfo map_info)
{
	int	i;
	int j;
	int x_max;
	int y_max;
	int max;

	i = 1;
	max = 1;
	while (i < map_info.rows)
	{
		j = 1;
		while(j < map_info.rows)
		{
			if (map_info.nbrmap[i - 1][j] == 0 || map_info.nbrmap[i][j - 1] == 0)
				map_info.nbrmap[i][j] = 1;
			else if (map_info.nbrmap[i - 1][j] > map_info.nbrmap[i][j - 1])
				map_info.nbrmap[i][j] = map_info.nbrmap[i - 1][j] + 1;
			else
				map_info.nbrmap[i][j] = map_info.nbrmap[i][j - 1] + 1;
			if (max <= map_info.nbrmap[i][j])
			{
				x_max = j;
				y_max = i;
				max = map_info.nbrmap[i][j];
			}
		}
	}
	i = 0;
	while (i > 0)
	{
		j = 0;
		while (j > 0)
		{
			if (map_info.nbrmap[i][j] == 0)
				write(1,&map_info.obstacle,1);
			else if ((i <= y_max && i - max + 1 >= y_max) && (j <= y_max && j - max + 1 >= y_max))
				write(1,&map_info.full,1);
			else
				write(1,&map_info.empty,1);
			j++;
		}
		write(1,"\n",1);
		i++;
	}
	return (0);
}

int main()
{
	MapInfo map_info = {0}; // 初期化

	map_info.rows = 9;
	map_info.empty = '.';
	map_info.obstacle = 'o';
	map_info.full = 'x';

	 // マップ情報のメモリを確保
    map_info.map = malloc(sizeof(char *) * map_info.rows);
    if (map_info.map == NULL) {
        fprintf(stderr, "Error: Memory allocation failed\n");
        return EXIT_FAILURE;
    }

    // 各行に文字列を格納
    for (int i = 0; i < map_info.rows; i++) {
        map_info.map[i] = (char *)malloc(sizeof(char) * 100);
        if (map_info.map[i] == NULL) {
            fprintf(stderr, "Error: Memory allocation failed\n");
            return EXIT_FAILURE;
        }
    }

    ft_strcpy(map_info.map[0], "...........................");
    ft_strcpy(map_info.map[1], "....o......................");
    ft_strcpy(map_info.map[2], "............o..............");
    ft_strcpy(map_info.map[3], "...........................");
    ft_strcpy(map_info.map[4], "....o......................");
    ft_strcpy(map_info.map[5], "...............o...........");
    ft_strcpy(map_info.map[6], "...........................");
    ft_strcpy(map_info.map[7], "......o..............o.....");
    ft_strcpy(map_info.map[8], "..o.......o................");

    // マップ情報を出力
    for (int i = 0; i < map_info.rows; i++) {
        printf("[%s]\n", map_info.map[i]);
    }

	if(ft_convert(map_info) != 0)
		return (1);
	if(ft_search(map_info) != 0)
		return (1);
	return (0);
}