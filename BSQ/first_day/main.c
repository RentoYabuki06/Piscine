/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yabukirento <yabukirento@student.42.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/25 11:58:14 by yabukirento       #+#    #+#             */
/*   Updated: 2024/03/25 13:20:23 by yabukirento      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <fcntl.h>
#include "ft.h"

void	ft_putstr(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		write(1, str[i], 1);
		i++;
	}
}

char	*ft_file(int argc, char *file)
{
	int	fd;
	char buffer[1024];
    ssize_t bytes_read;
    ssize_t total_bytes_read;
	size_t buffer_size;

	fd = oepn(file, O_RDONLY);
	if (fd == -1)
	{
		ft_putstr("map error\n");
		return (NULL);
	}
	// 初期バッファのサイズ
    size_t buffer_size = 1024;
	buffer = (char *)malloc(sizeof(char) * buffer_size);
    total_bytes_read = 0;
    while ((bytes_read = read(fd, buffer + total_bytes_read, buffer_size - total_bytes_read)) > 0)
	{
        total_bytes_read += bytes_read;
        // バッファが一杯になったら拡張する
        if (total_bytes_read == buffer_size) {
            // 新しいサイズのバッファを確保
            buffer_size *= 2;
            char *new_buffer = (char *)malloc(buffer_size * sizeof(char));
            if (new_buffer == NULL) {
                perror("Error reallocating memory");
                free(buffer);
                close(fd);
                return EXIT_FAILURE;
            }
            // 古いバッファの内容を新しいバッファにコピー
            for (ssize_t i = 0; i < total_bytes_read; ++i) {
                new_buffer[i] = buffer[i];
            }
            // 古いバッファを解放し、新しいバッファを使用する
            free(buffer);
            buffer = new_buffer;
        }
    }
	if (bytes_read == -1 || close(fd) == -1)
	{
		ft_putstr("map error\n");
		return (NULL);
	}
	return (buffer);
}

int	main(int argc, char *argv[])
{
	int i;
	
	i = 1;
	while (i < argc)
	{
		if (ft_file(argc, argv[1]) != 0)
		{
			ft_putstr("map error\n");
			continue ;
		}
		i++;
	}
	return (0);
}
