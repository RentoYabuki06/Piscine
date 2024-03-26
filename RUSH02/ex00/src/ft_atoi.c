/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yonuma <yonuma@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/23 08:25:36 by yuotsubo          #+#    #+#             */
/*   Updated: 2024/03/24 20:19:44 by yonuma           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/rush-02.h"

int	ft_isspace(char c)
{
	if (c == '\t' || c == '\n' || c == '\v' || c == '\f' || c == '\r'
		|| c == ' ')
		return (1);
	return (0);
}

int	ft_atoi(char *str)
{
	long long	res;
	int			flag;
	size_t		i;

	flag = 1;
	i = 0;
	while (ft_isspace(str[i]))
		i++;
	while (str[i] == '+' || str[i] == '-')
	{
		if (str[i] == '-')
			flag *= -1;
		i++;
	}
	res = 0;
	while (ft_is_num(str[i]))
	{
		res *= 10;
		res += str[i] - '0';
		i++;
	}
	return ((int)(res * flag));
}

// int	main(void)
// {
// 	printf("%d\n", ft_atoi("-2147483648"));
// }