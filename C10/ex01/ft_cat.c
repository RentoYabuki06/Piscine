/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_cat.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ryabuki <ryabuki@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/24 08:00:11 by ryabuki           #+#    #+#             */
/*   Updated: 2024/03/25 08:22:03 by ryabuki          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <fcntl.h>
#include <errno.h>

int	ft_str_len(char *str)
{
	int	i;

	i = 0;	
	while (str[i])
		i++;
	return (i);
}

void	ft_cat(char *filename)
{
	int		fd;
	int		contents;
	char	buf[100];

	fd = open(filename, O_RDONLY);
	if (fd == -1)
	{
		write(2, "Cannot read file.\n", 18);
		return ;
	}
	contents = read(fd, buf, 100);
	if (contents > 0)
		write(1, buf, contents);
	close(fd);
}

int	main(int argc, char **argv)
{
	if (argc < 2)
	{
		write(2, "File name missing.\n", 19);
		return (1);
	}
	else if (argc > 2)
	{
		write(2, "Too many arguments.\n", 20);
		return (1);
	}
	ft_cat(argv[1]);
	return (0);
}
