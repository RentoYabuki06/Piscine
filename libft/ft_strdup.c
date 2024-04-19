/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yabukirento <yabukirento@student.42.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/19 14:53:55 by yabukirento       #+#    #+#             */
/*   Updated: 2024/04/19 14:56:19 by yabukirento      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

char	*ft_strdup(const char *src)
{
	int		i;
	int		len;
	char	*dest;

	len = 0;
	while (src[len])
		len++;
	dest = (char *)malloc((len + 1) * sizeof(char));
	if (dest == NULL)
		return (NULL);
	i = 0;
	while (i < len)
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}

// #include <stdio.h>
// #include <stdlib.h>
// #include <string.h>

// // 自作した ft_strdup 関数
// char *ft_strdup(const char *src);

// int main() {
//     // テストケース1: 空の文字列
//     const char *src1 = "";
//     char *ret1_ft = ft_strdup(src1);
//     char *ret1_std = strdup(src1);
//     printf("Test case 1:\n");
//     printf("ft_strdup: \"%s\"\n", ret1_ft);
//     printf("strdup: \"%s\"\n", ret1_std);
//     printf("Result: %s\n\n", (strcmp(ret1_ft, ret1_std) == 0) ? "Match" : "Mismatch");
//     free(ret1_ft);  // メモリ解放前にNULLポインタチェックを行う必要はありません
//     free(ret1_std);

//     // テストケース2: 単一文字からなる文字列
//     const char *src2 = "A";
//     char *ret2_ft = ft_strdup(src2);
//     char *ret2_std = strdup(src2);
//     printf("Test case 2:\n");
//     printf("ft_strdup: \"%s\"\n", ret2_ft);
//     printf("strdup: \"%s\"\n", ret2_std);
//     printf("Result: %s\n\n", (strcmp(ret2_ft, ret2_std) == 0) ? "Match" : "Mismatch");
//     free(ret2_ft);
//     free(ret2_std);

//     // テストケース3: 長い文字列
//     const char *src3 = "This is a long string";
//     char *ret3_ft = ft_strdup(src3);
//     char *ret3_std = strdup(src3);
//     printf("Test case 3:\n");
//     printf("ft_strdup: \"%s\"\n", ret3_ft);
//     printf("strdup: \"%s\"\n", ret3_std);
//     printf("Result: %s\n\n", (strcmp(ret3_ft, ret3_std) == 0) ? "Match" : "Mismatch");
//     free(ret3_ft);
//     free(ret3_std);

//     // テストケース4: NULL ポインタを渡す
//     const char *src4 = NULL;
//     char *ret4_ft = ft_strdup(src4);
//     char *ret4_std = strdup(src4);
//     printf("Test case 4:\n");
//     printf("ft_strdup: \"%s\"\n", ret4_ft);
//     printf("strdup: \"%s\"\n", ret4_std);
//     printf("Result: %s\n\n", (ret4_ft == NULL && ret4_std == NULL) ? "Match" : "Mismatch");
//     free(ret4_ft);  // メモリ解放前にNULLポインタチェックを行う必要はありません
//     free(ret4_std);
//     return 0;
// }
