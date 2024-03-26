/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_hexdump.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ryabuki <ryabuki@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/26 07:18:10 by yabukirento       #+#    #+#             */
/*   Updated: 2024/03/26 09:49:17 by ryabuki          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <fcntl.h>
#include <unistd.h>
#include <errno.h>
#include <stdlib.h>
#include <string.h>

int	ft_strcmp(char *str01, char *str02)
{
	int i;

	i = 0;
	while (str01[i] == str02[i])
		i++;
	return (str01[i] - str02[i]);
}

int	ft_strlen(char *str)
{
	int	count;

	count = 0;
	while (str[count])
		count++;
	return (count);
}

void	ft_print_hex_ascii(unsigned char *buf, int len, int offset)
{
	int	i;
	int	j;
	char	*hex;

	i = 0;
	hex = "0123456789abcdef";
    while (i < len)
    {
        write(1, &offset, sizeof(offset));
        write(1, "  ", 2);
		j = 0;
        while (j < 16)
        {
            if (i + j < len)
            {
                write(1, &hex[buf[i + j] / 16], 1);
                write(1, &hex[buf[i + j] % 16], 1);
                write(1, " ", 1);
            }
            else
            {
                write(1, "   ", 3);
            }
			j++;
        }
        write(1, " | ", 3);
		j = 0;
        while (j < 16)
        {
            if (i + j < len)
            {
                if (buf[i + j] < 32 || buf[i + j] > 126)
                    write(1, ".", 1);
                else
                    write(1, &buf[i + j], 1);
            }
            else
            {
                write(1, " ", 1);
            }
			j++;
        }
        write(1, "\n", 1);
        i += 16;
    }
	write(1, "\n", 1);
}

void	ft_hexdump(char *filename)
{
	int fd;
	unsigned char	buf[1024];
	ssize_t bytes_read;
	int offset;

	offset = 0;
	fd = open(filename, O_RDONLY);
	if (fd == -1)
	{
		write(2, strerror(errno), ft_strlen(strerror(errno)));
		return ;
	}
	while ((bytes_read = read(fd, buf, 1024)) > 0)
	{
		ft_print_hex_ascii(buf, bytes_read, offset);
		offset += bytes_read;
	}
	if (bytes_read == -1)
	{
		write(2, strerror(errno), ft_strlen(strerror(errno)));
		return ;
	}
	close(fd);
}

int	main(int argc, char *argv[])
{
	char	*filename;

	if (argc != 2 && argc != 3)
		return (0);
	else if (argc == 3)
	{
		if (ft_strcmp(argv[1], "-c") != 0)
			return (0);
		filename = argv[2];
	}
	else
		filename = argv[1];
	ft_hexdump(filename);
	return (0);
}