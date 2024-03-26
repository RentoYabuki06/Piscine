/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strs_to_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ryabuki <ryabuki@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/19 08:14:33 by ryabuki           #+#    #+#             */
/*   Updated: 2024/03/24 10:26:02 by ryabuki          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "ft_stock_str.h"

int	ft_strlen(char *str)
{
	int	len;

	len = 0;
	while (str[len])
		len++;
	return (len);
}

char	*ft_strcpy(char *str, int size)
{
	char	*tmp;
	int		i;

	tmp = (char *)malloc(sizeof(char) * (size + 1));
	if (!tmp)
		return (0);
	i = 0;
	while (str[i])
	{
		tmp[i] = str[i];
		i += 1;
	}
	tmp[i] = 0;
	return (tmp);
}

struct	s_stock_str	*ft_strs_to_tab(int ac, char **av)
{
	int			i;
	t_stock_str	*tmp;

	tmp = (t_stock_str *)malloc(sizeof(t_stock_str) * (ac + 1));
	if (!(tmp))
		return (0);
	i = 0;
	while (i < ac)
	{
		tmp[i].size = ft_strlen(av[i]);
		tmp[i].str = av[i];
		tmp[i].copy = ft_strcpy(av[i], tmp[i].size);
		i++;
	}
	tmp[i].size = 0;
	tmp[i].str = 0;
	tmp[i].copy = 0;
	return (tmp);
}

// #include <stdio.h>
// void print_stock_str(t_stock_str *stock)
// {
// 	for (int i = 0; i < 1; i++)
// 	{
// 		printf("Size:[%d]",stock[i].size);
// 		printf("\nStrings:[");
// 		for (int j = 0; stock[i].str[j] != '\0'; j++) {
// 			printf("%c",stock[i].str[j]);
// 		}
// 		printf("]\nCopy:[");
// 		for (int j = 0; stock[i].copy[j] != '\0'; j++) {
// 			printf("%c",stock[i].copy[j]);
// 		}
// 		printf("]\n");
//     }
// }

// int main(void)
// {
//     int ac1 = 1;
//     char *av1[4] = {"one"};
// 	// int ac2 = 3;
//     // char *av2[10] = {"helloworld"};
//     t_stock_str stock = {5, "hello", "hello"};
//     printf("<<< before >>>\n");
//     print_stock_str(&stock);
//     // ft_strs_to_tab(ac, av);
//     printf("<<< after >>>\n");
//     print_stock_str(ft_strs_to_tab(ac1, av1));
// 	// printf("<<< after >>>\n");
//     // print_stock_str(ft_strs_to_tab(ac2, av2));
//     return 0;
// }
