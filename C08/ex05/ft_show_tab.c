/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_show_tab.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ryabuki <ryabuki@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/19 08:14:28 by ryabuki           #+#    #+#             */
/*   Updated: 2024/03/26 12:53:03 by ryabuki          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include "ft_stock_str.h"

void	ft_putchar(char c)
{
	write(1, &c, 1);
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

void	ft_show_tab(struct s_stock_str *stock)
{
	int	i;

	i = 0;
	while (stock[i].str != 0)
	{
		ft_putstr(stock[i].str);
		write(1, "\n", 1);
		ft_putnbr(stock[i].size);
		write(1, "\n", 1);
		ft_putstr(stock[i].copy);
		write(1, "\n", 1);
		i++;
	}
}

/////////ここ以下はコメントアウトして提出//////////////////////////////
// #include <stdlib.h>
// #include "ft_stock_str.h"

// int	ft_strlen(char *str)
// {
// 	int	len;

// 	len = 0;
// 	while (str[len])
// 		len++;
// 	return (len);
// }

// char	*ft_strcpy(char *str, int size)
// {
// 	char	*tmp;
// 	int		i;

// 	tmp = (char *)malloc(sizeof(char) * (size + 1));
// 	if (!tmp)
// 		return (0);
// 	i = 0;
// 	while (str[i])
// 	{
// 		tmp[i] = str[i];
// 		i += 1;
// 	}
// 	tmp[i] = 0;
// 	return (tmp);
// }

// struct	s_stock_str	*ft_strs_to_tab(int ac, char **av)
// {
// 	int			i;
// 	t_stock_str	*tmp;

// 	tmp = (t_stock_str *)malloc(sizeof(t_stock_str) * (ac + 1));
// 	if (!(tmp))
// 		return (0);
// 	i = 0;
// 	while (i < ac)
// 	{
// 		tmp[i].size = ft_strlen(av[i]);
// 		tmp[i].str = av[i];
// 		tmp[i].copy = ft_strcpy(av[i], tmp[i].size);
// 		i++;
// 	}
// 	tmp[i].size = 0;
// 	tmp[i].str = 0;
// 	tmp[i].copy = 0;
// 	return (tmp);
// }
// #include <stdio.h>
// int main(void)
// {
//     int		ac1 =3;
//     char	*av[] = {"one", "two", "good"};
//     // printf("\n<<< result >>>\n");
//     ft_show_tab(ft_strs_to_tab(ac1, av));
//     return 0;
// }
