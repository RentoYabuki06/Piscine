/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   do-op.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ryabuki <ryabuki@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/25 16:14:19 by ryabuki           #+#    #+#             */
/*   Updated: 2024/03/25 17:03:49 by ryabuki          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

typedef int (*	t_operation)(int, int);
int	ft_add(int a, int b);
int	ft_sub(int a, int b);
int	ft_multi(int a, int b);
int	ft_div(int a, int b);
int	ft_mod(int a, int b);
int	ft_atoi(char *str);

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

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putnbr(int nb)
{
	if (nb == -2147483648)
	{
		write(1, "-2147483648", 11);
		return ;
	}
	else if (nb < 0)
	{
		write(1, "-", 1);
		nb = -nb;
	}
	if (nb >= 10)
		ft_putnbr(nb / 10);
	ft_putchar(nb % 10 + '0');
}

void	ft_cal(int a, int b, char symbol)
{
	t_operation	operation;

	if (symbol == '+')
		operation = &ft_add;
	else if (symbol == '-')
		operation = &ft_sub;
	else if (symbol == '*')
		operation = &ft_multi;
	else if (symbol == '/')
		operation = &ft_div;
	else if (symbol == '%')
		operation = &ft_mod;
	else
	{
		ft_putnbr(0);
		write(1, "\n", 1);
		return ;
	}
	ft_putnbr(operation(a, b));
	write(1, "\n", 1);
}

int	main(int argc, char *argv[])
{
	int		b;
	char	s;

	if (argc != 4)
		return (0);
	s = argv[2][0];
	b = ft_atoi(argv[3]);
	if (!(s == '+' || s == '-' || s == '*' || s == '/' || s == '%'))
	{
		write(1, "0\n", 2);
		return (0);
	}
	if (s == '/' && b == 0)
	{
		ft_putstr("Stop : division by zero\n");
		return (0);
	}
	if (s == '%' && b == 0)
	{
		ft_putstr("Stop : modulo by zero\n");
		return (0);
	}
	ft_cal(ft_atoi(argv[1]), b, s);
	return (0);
}
