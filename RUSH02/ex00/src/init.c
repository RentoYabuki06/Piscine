/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   init.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yonuma <yonuma@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/23 08:12:18 by yuotsubo          #+#    #+#             */
/*   Updated: 2024/03/24 21:42:51 by yonuma           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/rush-02.h"

static char	**store_lines(char **strs, char *line, size_t line_count)
{
	size_t	i;
	char	**res;

	res = (char **)malloc((line_count + 1) * sizeof(char *));
	if (!res)
		return (NULL);
	if (!line)
		return (strs);
	i = 0;
	while (strs[i])
	{
		res[i] = strs[i];
		i++;
	}
	res[i++] = ft_strdup(line);
	res[i] = NULL;
	return (res);
}

static char	**get_lines(int fd)
{
	char	c;
	char	*line;
	char	**res;
	size_t	line_count;

	res = (char **)malloc(1 * sizeof(char *));
	if (!res)
		return (NULL);
	res[0] = NULL;
	line_count = 0;
	line = NULL;
	while (read(fd, &c, sizeof(char)))
	{
		if (c == '\n')
		{
			line_count++;
			res = store_lines(res, line, line_count);
			free(line);
			line = NULL;
		}
		else
			line = ft_strcjoin(&line, c);
	}
	return (res);
}

t_entry	**init(int argc, char **argv)
{
	int		fd;
	char	**lines;

	if (argc != 2 && argc != 3)
	{
		ft_putstr("Error\n");
		return (NULL);
	}
	fd = 0;
	if (argc == 2)
	{
		fd = open("numbers.dict", O_RDONLY);
	}
	else if (argc == 3)
		fd = open(argv[1], O_RDONLY);
	if (fd < 0)
	{
		ft_putstr("Error\n");
		return (NULL);
	}
	lines = get_lines(fd);
	if (!lines)
		return (NULL);
	close(fd);
	return (make_entries(lines));
}
