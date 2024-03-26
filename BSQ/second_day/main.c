#include <stdio.h>
#include <stdlib.h>
#include <fcntl.h>
#include <unistd.h>

typedef struct s_mapinfo
{
    struct s_mapinfo *next;     // 次の構造体
    int rows;                   // マップの行数
    int cols;                   // マップの列数
    char empty;                 // "empty"の文字
    char obstacle;              // "obstacle"の文字
    char full;                  // "full"の文字
    char **map;                 // マップ情報のポインタ
    int **nbrmap;               // 数字に置き換えたマップ情報のポインタ
    int max;                    // 一番の大きな正方形の辺の長さ
    int x_max;                  // maxのxの位置
    int y_max;                  // maxのyの位置
} MapInfo;

char **allocate_map(int rows, int cols) {
    char **map = (char **)malloc(rows * sizeof(char *));
    if (map == NULL) {
        return NULL;
    }
    for (int i = 0; i < rows; i++) {
        map[i] = (char *)malloc(cols * sizeof(char));
        if (map[i] == NULL) {
            for (int j = 0; j < i; j++) {
                free(map[j]);
            }
            free(map);
            return NULL;
        }
    }
    return map;
}

void free_map(char **map, int rows) {
    for (int i = 0; i < rows; i++) {
        free(map[i]);
    }
    free(map);
}

MapInfo read_map(const char *filename) {
    MapInfo map_info;
    map_info.rows = 0;
    map_info.cols = 0;
    map_info.map = NULL;

    int fd = open(filename, O_RDONLY);
    if (fd == -1) {
        map_info.rows = -1; // Indicates failure
        return map_info;
    }

	int i = 0;
	int j = 0;
	int k = 0;
    char buf[1024];
    char tmp[1024];
	while (read(fd, buf, 1) > 0)
	{
		while(buf[i] >= '0' && buf[i] <= '9')
		{
			tmp[j] = buf[i];
			i++;
			j++;
		}
	}
	map_info.rows = ft_atoi(tmp);

	//数字の次が表示文字ならemptyへ格納
	if (read(fd, buf, 1) > 0 && (buf[i] >= ' ' && buf[i] <= '~'))
		map_info.empty = buf[i];
	else
	{
		write(1, "map error\n", 10);
		exit;
	}
	//emptyの次が表示文字ならobstcleへ格納
	if (read(fd, buf, 1) > 0 && (buf[i] >= ' ' && buf[i] <= '~'))
		map_info.obstacle = buf[i];
	else
	{
		write(1, "map error\n", 10);
		exit;
	}
	//obstacleの次が表示文字ならfullへ格納
	if (read(fd, buf, 1) > 0 && (buf[i] >= ' ' && buf[i] <= '~'))
		map_info.full = buf[i];
	else
	{
		write(1, "map error\n", 10);
		exit;
	}
	//改行まで進める
	while (read(fd, buf, 1) > 0 && buf[i] != '\n')
		i++;
	//改行の回数分インクリメント
	while (read(fd, buf, 1) > 0 && buf[i] == '\n')
		i++;
	//改行くるまでそれぞれのラインに格納
	j = 0;
    while (read(fd, buf, sizeof(buf)) > 0)
	{
		k = 0;
        while (buf[i] != '\n')
		{
			map_info.map[j][k] = buf[i];
			i++;
			k++;
		}
		j++;
    }

    map_info.map = allocate_map(map_info.rows, map_info.cols);
    if (map_info.map == NULL) {
        map_info.rows = -1; // Indicates failure
        close(fd);
        return map_info;
    }

    int row = 0;
    while (read(fd, buf, sizeof(buf)) > 0 && row < map_info.rows) {
        for (int i = 0; i < sizeof(buf); i++) {
            if (buf[i] == '\n') {
                break;
            }
            map_info.map[row][i] = buf[i];
            if (row == 0) {
                map_info.cols++;
            }
        }
        row++;
    }

    close(fd);
    return map_info;
}

int main(int argc, char *argv[]) {
    if (argc != 2) {
        fprintf(stderr, "Usage: %s <filename>\n", argv[0]);
        return EXIT_FAILURE;
    }

    const char *filename = argv[1];
    MapInfo map_info = read_map(filename);
    if (map_info.rows == -1) {
        // Failed to read map
        fprintf(stderr, "Error: Failed to read map from file '%s'\n", filename);
        return EXIT_FAILURE;
    }

    // Print map for testing
    for (int i = 0; i < map_info.rows; i++) {
        for (int j = 0; j < map_info.cols; j++) {
            printf("%c", map_info.map[i][j]);
        }
        printf("\n");
    }

    free_map(map_info.map, map_info.rows);

    return EXIT_SUCCESS;
}
