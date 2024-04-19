/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yabukirento <yabukirento@student.42.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/19 14:53:55 by yabukirento       #+#    #+#             */
/*   Updated: 2024/04/19 14:57:02 by yabukirento      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stddef.h>

static size_t	ft_strlen(const char *str)
{
	size_t	i;

	i = 0;
	while (str[i] != '\0')
	{
		i++;
	}
	return (i);
}

static int ft_strncmp(const char *s1, const char *s2, size_t n)
{
	size_t	i;

	i = 0;
	while ((*s1 != '\0' || *s2 != '\0') && i < n)
	{
		if (*s1 != *s2)
		{
			return (*s1 - *s2);
		}
		s1++;
		s2++;
		i++;
	}
	return (0);
}

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t i;
	size_t len_needle;
	const unsigned char *phaystack;

	phaystack = (const unsigned char *) haystack;
	len_needle = ft_strlen(needle);
	i = 0;
	while (i < len && len - i >= len_needle)
	{
		if (ft_strncmp((const char *)(phaystack + i), needle, len_needle) == 0)
		{
			return (char *)(haystack + i);
		}
		i++;
	}
	return ((void *)0);
}

// #include <stdio.h>
// #include <string.h>

// int main() {
//     // テストケース1: needleがhaystack内に存在する場合
//     const char haystack1[] = "Hello, World!";
//     const char needle1[] = "World";
//     const char *result1 = ft_strnstr(haystack1, needle1, strlen(haystack1));
//     const char *result1_std = strnstr(haystack1, needle1, strlen(haystack1));
//     printf("Case 1 - ft_strnstr: %s\n", result1 ? result1 : "Not found");
//     printf("Case 1 - strnstr : %s\n", result1_std ? result1_std : "Not found");
//     printf("Case 1 - Match   : %s\n", result1 == result1_std ? "Yes" : "No");

//     // テストケース2: needleがhaystack内に存在せず、lenがhaystackよりも短い場合
//     const char haystack2[] = "Hello, World!";
//     const char needle2[] = "Japan";
//     const char *result2 = ft_strnstr(haystack2, needle2, strlen(haystack2));
//     const char *result2_std = strnstr(haystack2, needle2, strlen(haystack2));
//     printf("Case 2 - ft_strnstr: %s\n", result2 ? result2 : "Not found");
//     printf("Case 2 - strnstr : %s\n", result2_std ? result2_std : "Not found");
//     printf("Case 2 - Match   : %s\n", result2 == result2_std ? "Yes" : "No");

//     // テストケース3: needleがhaystack内に存在せず、lenがhaystackよりも長い場合
//     const char haystack3[] = "Hello, World!";
//     const char needle3[] = "Japan";
//     const char *result3 = ft_strnstr(haystack3, needle3, strlen(haystack3) + 5);
//     const char *result3_std = strnstr(haystack3, needle3, strlen(haystack3) + 5);
//     printf("Case 3 - ft_strnstr: %s\n", result3 ? result3 : "Not found");
//     printf("Case 3 - strnstr : %s\n", result3_std ? result3_std : "Not found");
//     printf("Case 3 - Match   : %s\n", result3 == result3_std ? "Yes" : "No");

//     // テストケース4: haystackが空文字列の場合
//     const char haystack4[] = "";
//     const char needle4[] = "Hello";
//     const char *result4 = ft_strnstr(haystack4, needle4, strlen(haystack4));
//     const char *result4_std = strnstr(haystack4, needle4, strlen(haystack4));
//     printf("Case 4 - ft_strnstr: %s\n", result4 ? result4 : "Not found");
//     printf("Case 4 - strnstr : %s\n", result4_std ? result4_std : "Not found");
//     printf("Case 4 - Match   : %s\n", result4 == result4_std ? "Yes" : "No");

//     // テストケース5: needleが空文字列の場合
//     const char haystack5[] = "Hello, World!";
//     const char needle5[] = "";
//     const char *result5 = ft_strnstr(haystack5, needle5, strlen(haystack5));
//     const char *result5_std = strnstr(haystack5, needle5, strlen(haystack5));
//     printf("Case 5 - ft_strnstr: %s\n", result5 ? result5 : "Not found");
//     printf("Case 5 - strnstr : %s\n", result5_std ? result5_std : "Not found");
//     printf("Case 5 - Match   : %s\n", result5 == result5_std ? "Yes" : "No");

//     return 0;
// }

