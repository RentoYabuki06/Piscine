/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yabukirento <yabukirento@student.42.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/19 14:53:55 by yabukirento       #+#    #+#             */
/*   Updated: 2024/04/19 14:54:25 by yabukirento      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stddef.h>
#include <stdlib.h>

static void *ft_memset(void *b, int c, size_t len)
{
    unsigned char *p = b;
    unsigned char uc = c;

    while (len > 0)
	{
        *p++ = uc;
		len--;
    }

    return b;
}

void	*ft_calloc(size_t count, size_t size)
{
	size_t total_size;
	void *ptr;

	total_size = count * size;
	ptr = malloc(total_size);
	if (ptr != NULL)
	{
		ft_memset(ptr, 0, total_size);
	}
	return (ptr);
}

// #include <stdio.h>
// #include <string.h>

// int main() {
//     // テストケース1: 正常な引数
//     size_t count1 = 5;
//     size_t size1 = sizeof(int);
//     int *result1_ft = (int *)ft_calloc(count1, size1);
//     printf("Case 1 - ft_calloc: %p\n", (void *)result1_ft);

//     int *result1_std = (int *)calloc(count1, size1);
//     printf("Case 1 - calloc: %p\n", (void *)result1_std);

//     printf("Case 1 - Result: %s\n", memcmp(result1_ft, result1_std, count1 * size1) == 0 ? "Match" : "Mismatch");

//     free(result1_ft);
//     free(result1_std);

//     // テストケース2: 要素数0
//     size_t count2 = 0;
//     size_t size2 = sizeof(char);
//     char *result2_ft = (char *)ft_calloc(count2, size2);
//     printf("Case 2 - ft_calloc: %p\n", (void *)result2_ft);

//     char *result2_std = (char *)calloc(count2, size2);
//     printf("Case 2 - calloc: %p\n", (void *)result2_std);

//     printf("Case 2 - Result: %s\n", memcmp(result2_ft, result2_std, count2 * size2) == 0 ? "Match" : "Mismatch");

//     free(result2_ft);
//     free(result2_std);

//     // テストケース3: サイズ0
//     size_t count3 = 3;
//     size_t size3 = 0;
//     int *result3_ft = (int *)ft_calloc(count3, size3);
//     printf("Case 3 - ft_calloc: %p\n", (void *)result3_ft);

//     int *result3_std = (int *)calloc(count3, size3);
//     printf("Case 3 - calloc: %p\n", (void *)result3_std);

//     printf("Case 3 - Result: %s\n", memcmp(result3_ft, result3_std, count3 * size3) == 0 ? "Match" : "Mismatch");

//     free(result3_ft);
//     free(result3_std);

//     // テストケース4: メモリ割り当て失敗
//     size_t count4 = SIZE_MAX;
//     size_t size4 = sizeof(double);
//     double *result4_ft = (double *)ft_calloc(count4, size4);
//     printf("Case 4 - ft_calloc: %p\n", (void *)result4_ft);

//     double *result4_std = (double *)calloc(count4, size4);
//     printf("Case 4 - calloc: %p\n", (void *)result4_std);

//     printf("Case 4 - Result: %s\n", result4_ft == NULL && result4_std == NULL ? "Match" : "Mismatch");

//     // テストケース5: メモリサイズが大きい
//     size_t count5 = 2;
//     size_t size5 = SIZE_MAX;
//     char *result5_ft = (char *)ft_calloc(count5, size5);
//     printf("Case 5 - ft_calloc: %p\n", (void *)result5_ft);

//     char *result5_std = (char *)calloc(count5, size5);
//     printf("Case 5 - calloc: %p\n", (void *)result5_std);

//     printf("Case 5 - Result: %s\n", memcmp(result5_ft, result5_std, count5 * size5) == 0 ? "Match" : "Mismatch");

//     free(result5_ft);
//     free(result5_std);

//     return 0;
// }