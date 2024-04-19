/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isascii.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yabukirento <yabukirento@student.42.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/19 14:53:55 by yabukirento       #+#    #+#             */
/*   Updated: 2024/04/19 14:54:44 by yabukirento      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int ft_isascii(int c)
{
	if (c >= 0 && c <= 127)
		return (1);
	else
		return (0);
}

// #include <stdio.h>
// #include <ctype.h>

// // 自作した ft_isascii 関数
// int ft_isascii(int c);

// int main() {
//     // テストケース1: ASCII 文字
//     char c1 = 'A';
//     int ret1_ft = ft_isascii(c1);
//     int ret1_std = isascii(c1);
//     printf("Test case 1:\n");
//     printf("ft_isascii: %d\n", ret1_ft);
//     printf("isascii: %d\n", ret1_std);
//     printf("Result: %s\n\n", (ret1_ft == ret1_std) ? "Match" : "Mismatch");

//     // テストケース2: 非 ASCII 文字 (負の文字コード)
//     char c2 = -1;
//     int ret2_ft = ft_isascii(c2);
//     int ret2_std = isascii(c2);
//     printf("Test case 2:\n");
//     printf("ft_isascii: %d\n", ret2_ft);
//     printf("isascii: %d\n", ret2_std);
//     printf("Result: %s\n\n", (ret2_ft == ret2_std) ? "Match" : "Mismatch");

//     // テストケース3: 非 ASCII 文字 (大きな正の文字コード)
//     int c3 = 200;
//     int ret3_ft = ft_isascii(c3);
//     int ret3_std = isascii(c3);
//     printf("Test case 3:\n");
//     printf("ft_isascii: %d\n", ret3_ft);
//     printf("isascii: %d\n", ret3_std);
//     printf("Result: %s\n\n", (ret3_ft == ret3_std) ? "Match" : "Mismatch");

//     // テストケース4: 制御文字
//     char c4 = '\t';
//     int ret4_ft = ft_isascii(c4);
//     int ret4_std = isascii(c4);
//     printf("Test case 4:\n");
//     printf("ft_isascii: %d\n", ret4_ft);
//     printf("isascii: %d\n", ret4_std);
//     printf("Result: %s\n\n", (ret4_ft == ret4_std) ? "Match" : "Mismatch");

//     // テストケース5: 特殊文字
//     char c5 = '$';
//     int ret5_ft = ft_isascii(c5);
//     int ret5_std = isascii(c5);
//     printf("Test case 5:\n");
//     printf("ft_isascii: %d\n", ret5_ft);
//     printf("isascii: %d\n", ret5_std);
//     printf("Result: %s\n\n", (ret5_ft == ret5_std) ? "Match" : "Mismatch");

//     return 0;
// }
