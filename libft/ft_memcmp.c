/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yabukirento <yabukirento@student.42.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/19 14:53:55 by yabukirento       #+#    #+#             */
/*   Updated: 2024/04/19 15:53:17 by yabukirento      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stddef.h>

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	size_t i;
	const unsigned char *ps1;
	const unsigned char *ps2;

	i = 0;
	ps1 = s1;
	ps2 = s2;
	while (i < n)
	{
		if (ps1[i] != ps2[i])
			return (ps1[i] - ps2[i]);
		i++;
	}
	return (0);
}

// #include <stdio.h>
// #include <string.h>

// int main() {
//     // テストケース1: 異なる文字列
//     char str1[] = "Hello";
//     char str2[] = "World";
//     int result1 = ft_memcmp(str1, str2, 5);
//     int result2 = memcmp(str1, str2, 5);
//     printf("Case 1 - ft_memcmp: %d\n", result1);
//     printf("Case 1 - memcmp: %d\n", result2);
//     printf("Case 1 - Result: %s\n", result1 == result2 ? "Match" : "Mismatch");

//     // テストケース2: 同じ文字列
//     char str3[] = "Hello";
//     char str4[] = "Hello";
//     int result3 = ft_memcmp(str3, str4, 5);
//     int result4 = memcmp(str3, str4, 5);
//     printf("Case 2 - ft_memcmp: %d\n", result3);
//     printf("Case 2 - memcmp: %d\n", result4);
//     printf("Case 2 - Result: %s\n", result3 == result4 ? "Match" : "Mismatch");

//     // テストケース3: 部分的に一致
//     char str5[] = "Hello, World!";
//     char str6[] = "Hello, There!";
//     int result5 = ft_memcmp(str5, str6, 6);
//     int result6 = memcmp(str5, str6, 6);
//     printf("Case 3 - ft_memcmp: %d\n", result5);
//     printf("Case 3 - memcmp: %d\n", result6);
//     printf("Case 3 - Result: %s\n", result5 == result6 ? "Match" : "Mismatch");

//     // テストケース4: NULLポインタ
//     char *str7 = NULL;
//     char *str8 = NULL;
//     int result7 = ft_memcmp(str7, str8, 0);
//     int result8 = memcmp(str7, str8, 0);
//     printf("Case 4 - ft_memcmp: %d\n", result7);
//     printf("Case 4 - memcmp: %d\n", result8);
//     printf("Case 4 - Result: %s\n", result7 == result8 ? "Match" : "Mismatch");

//     // テストケース5: エッジケース - バイト数が0
//     char str9[] = "Hello";
//     char str10[] = "Hello";
//     int result9 = ft_memcmp(str9, str10, 0);
//     int result10 = memcmp(str9, str10, 0);
//     printf("Case 5 - ft_memcmp: %d\n", result9);
//     printf("Case 5 - memcmp: %d\n", result10);
//     printf("Case 5 - Result: %s\n", result9 == result10 ? "Match" : "Mismatch");

//     return 0;
// }
