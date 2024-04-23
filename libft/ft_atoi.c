/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yabukirento <yabukirento@student.42.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/19 14:53:55 by yabukirento       #+#    #+#             */
/*   Updated: 2024/04/23 16:09:13 by yabukirento      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_atoi(const char *str)
{
	int			i;
	int			sign;
	long long	ans;

	i = 0;
	ans = 0;
	sign = 1;
	while ((str[i] >= 9 && str[i] <= 13) || str[i] == ' ')
		i++;
	if (str[i] == '+' || str[i] == '-')
	{
		if (str[i] == '-')
			sign = -1;
		i++;
	}
	while (str[i] >= '0' && str[i] <= '9')
	{
		if (ans > (INT64_MAX / 10))
		{
			if (sign == 1)
				return (-1);
			if (sign == -1)
				return (0);
		}
		if (ans == (INT64_MAX / 10) && (str[i] >= '8' && str[i] <= '9'))
		{
			if (sign == 1)
				return (-1);
			if (sign == -1)
				return (0);
		}
		ans *= 10;
		ans += str[i] - '0';
		i++;
	}
	return ((int)ans * sign);
}

// #include <stdio.h>
// #include <stdlib.h>

// // 自作のft_atoi関数のプロトタイプ宣言
// int ft_atoi(const char *str);

// int main() {
//     char str[] = "-9223372036854775809"; // 数値の文字列
//     char str01[] = "-9223372036854775809"; // 数値の文字列

//     // atoi関数とft_atoi関数を使って文字列を整数に変換
//     int atoi_value = atoi(str);
//     int ft_atoi_value = ft_atoi(str01);

//     // 結果を出力
//     printf("String: %s\n", str);
//     printf("atoi: %d\n", atoi_value);
//     printf("ft_atoi: %d\n", ft_atoi_value);

//     return 0;
// }
