#include <unistd.h>
#include <stdlib.h>
#include <stdio.h>
#include <fcntl.h>
#include <string.h>
#include <errno.h>
#include <libgen.h>

int	ft_strcmp(char *s1, char *s2)
{
	while (*s1 != '\0' || *s2 != '\0')
	{
		if (*s1 != *s2)
		{
			return (*s1 - *s2);
		}
		s1++;
		s2++;
	}
	return (0);
}

int	ft_atoi(char *str)
{
	int		i;
	int		sign;
	long	ans;

	i = 0;
	ans = 0;
	sign = 1;
	while ((str[i] >= 9 && str[i] <= 13) || str[i] == ' ')
		i++;
	while (str[i] == '+' || str[i] == '-')
	{
		if (str[i] == '-')
			sign *= -1;
		i++;
	}
	while (str[i] >= '0' && str[i] <= '9')
	{
		ans *= 10;
		ans += str[i] - '0';
		i++;
	}
	return ((int)ans * sign);
}

void	ft_putstr(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		write(1, &str[i], 1);
		i++;
	}
}

int	ft_error(void)
{
	ft_putstr(strerror(errno));
	return (1);
}

int main(int argc, char *argv[])
{
	long	num_bytes;
	int		fd;
	char buffer[1024];
    ssize_t bytes_read;
	off_t file_size;
	off_t read_offset;

    if (argc != 3 || ft_strcmp(argv[1], "-c") != 0)
		ft_error();
    num_bytes = ft_atol(argv[2]);
    if (num_bytes <= 0)
		ft_error();
    fd = open(argv[3], O_RDONLY);
    if (fd == -1)
		ft_error();
    off_t file_size = lseek(fd, 0, SEEK_END);
    if (file_size == -1)
		ft_error();
    off_t read_offset = file_size > num_bytes ? file_size - num_bytes : 0;
    if (lseek(fd, read_offset, SEEK_SET) == -1)
		ft_error();
    while ((bytes_read = read(fd, buffer, 1024)) > 0)
	{
        if (write(STDOUT_FILENO, buffer, bytes_read) == -1)
            print_error("Error writing to stdout");
    }
    if (bytes_read == -1 || close(fd) == -1)
        ft_error();
    return EXIT_SUCCESS;
}
