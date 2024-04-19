/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isdigit.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yabukirento <yabukirento@student.42.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/19 14:53:55 by yabukirento       #+#    #+#             */
/*   Updated: 2024/04/19 14:54:51 by yabukirento      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isdigit(int c)
{
	if (c >= 48 && c <= 57 )
		return (1);
	else
		return (0);
}

// #include <stdio.h>
// #include <ctype.h>

// // 自作した ft_isdigit 関数
// int ft_isdigit(int c);

// int main() {
//     // テストケース1: 数字文字
//     char c1 = '5';
//     int ret1_ft = ft_isdigit(c1);
//     int ret1_std = isdigit(c1);
//     printf("Test case 1:\n");
//     printf("ft_isdigit: %d\n", ret1_ft);
//     printf("isdigit: %d\n", ret1_std);
//     printf("Result: %s\n\n", (ret1_ft == ret1_std) ? "Match" : "Mismatch");

//     // テストケース2: アルファベット文字
//     char c2 = 'A';
//     int ret2_ft = ft_isdigit(c2);
//     int ret2_std = isdigit(c2);
//     printf("Test case 2:\n");
//     printf("ft_isdigit: %d\n", ret2_ft);
//     printf("isdigit: %d\n", ret2_std);
//     printf("Result: %s\n\n", (ret2_ft == ret2_std) ? "Match" : "Mismatch");

//     // テストケース3: 空白文字
//     char c3 = ' ';
//     int ret3_ft = ft_isdigit(c3);
//     int ret3_std = isdigit(c3);
//     printf("Test case 3:\n");
//     printf("ft_isdigit: %d\n", ret3_ft);
//     printf("isdigit: %d\n", ret3_std);
//     printf("Result: %s\n\n", (ret3_ft == ret3_std) ? "Match" : "Mismatch");

//     // テストケース4: 制御文字
//     char c4 = '\t';
//     int ret4_ft = ft_isdigit(c4);
//     int ret4_std = isdigit(c4);
//     printf("Test case 4:\n");
//     printf("ft_isdigit: %d\n", ret4_ft);
//     printf("isdigit: %d\n", ret4_std);
//     printf("Result: %s\n\n", (ret4_ft == ret4_std) ? "Match" : "Mismatch");

//     // テストケース5: 特殊文字
//     char c5 = '%';
//     int ret5_ft = ft_isdigit(c5);
//     int ret5_std = isdigit(c5);
//     printf("Test case 5:\n");
//     printf("ft_isdigit: %d\n", ret5_ft);
//     printf("isdigit: %d\n", ret5_std);
//     printf("Result: %s\n\n", (ret5_ft == ret5_std) ? "Match" : "Mismatch");

//     return 0;
// }
