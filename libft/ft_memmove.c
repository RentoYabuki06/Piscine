/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yabukirento <yabukirento@student.42.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/19 14:53:55 by yabukirento       #+#    #+#             */
/*   Updated: 2024/04/19 14:55:30 by yabukirento      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stddef.h>

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	unsigned char *pdst;
	const unsigned char *psrc;
    size_t i;

    i = 0;
    pdst = dst;
    psrc = src;

	if (src == NULL)
		return dst;

	//オーバーラップしている場合
	if (dst > src && dst < src + len)
	{
		pdst += len - 1;
		psrc += len - 1;
		while (i < len)
		{
			*(pdst--) = *(psrc--);
            i++;
		}
	}
	// オーバーラップしていない場合
	else
    {
        while (i < len)
        {
            *(pdst++) = *(psrc++);
            i++;
        }
    }
    return dst;
}

// #include <stdio.h>
// #include <string.h>

// int main() {
//     // テストケース1: オーバーラップしない場合
//     char src1[] = "Hello, World!";
//     char dest1[20];
//     char src1_memmove[] = "Hello, World!";
//     char dest1_memmove[20];

//     memmove(dest1_memmove, src1_memmove, strlen(src1_memmove) + 1);
//     printf("Case 1 - memmove: src=%s, dest=%s\n", src1_memmove, dest1_memmove);
    
//     ft_memmove(dest1, src1, strlen(src1) + 1);
//     printf("Case 1 - ft_memmove: src=%s, dest=%s\n", src1, dest1);
//     printf("Case 1 - Result: %s\n", strcmp(dest1, dest1_memmove) == 0 ? "Match" : "Mismatch");

//     // テストケース2: オーバーラップする場合
//     char src2[] = "Hello, World!";
//     char src2_memmove[] = "Hello, World!";
//     char *dest2_memmove = src2_memmove - 5;
//     char *dest2 = src2 - 5;
//     memmove(dest2_memmove, src2_memmove, 8);
//     printf("Case 2 - memmove overlap: src=%s, dest=%s\n", src2_memmove + 6, dest2_memmove);
    
//     ft_memmove(dest2, src2, 8);
//     printf("Case 2 - ft_memmove overlap: src=%s, dest=%s\n", src2 + 6, dest2);
//     printf("Case 2 - Result: %s\n", strcmp(dest2, dest2_memmove) == 0 ? "Match" : "Mismatch");

//     // テストケース3: オーバーラップする場合（srcとdestが入れ替わる）
//     char src3[] = "Hello, World!";
//     char dest3[20];
//     char src3_memmove[] = "Hello, World!";
//     char dest3_memmove[20];

//     memmove(dest3_memmove + 6, src3_memmove, strlen(src3_memmove) + 1);
//     printf("Case 3 - memmove overlap (reverse): src=%s, dest=%s\n", src3_memmove, dest3_memmove);
    
//     ft_memmove(dest3 + 6, src3, strlen(src3) + 1);
//     printf("Case 3 - ft_memmove overlap (reverse): src=%s, dest=%s\n", src3, dest3 + 6);
//     printf("Case 3 - Result: %s\n", strcmp(dest3 + 6, dest3_memmove + 6) == 0 ? "Match" : "Mismatch");

//     // テストケース5: 空の文字列を渡した場合
//     char src5[] = "";
//     char dest5[20];
//     char src5_memmove[] = "";
//     char dest5_memmove[20];

//     memmove(dest5_memmove, src5_memmove, strlen(src5_memmove) + 1);
//     printf("Case 5 - memmove with empty string: src=%s, dest=%s\n", src5_memmove, dest5_memmove);

//     ft_memmove(dest5, src5, strlen(src5) + 1);
//     printf("Case 5 - ft_memmove with empty string: src=%s, dest=%s\n", src5, dest5);
//     printf("Case 5 - Result: %s\n", strcmp(dest5, dest5_memmove) == 0 ? "Match" : "Mismatch");
//     // テストケース4: NULLポインタを渡した場合
//     char dest4[20];
//     char dest4_memmove[20];

//     memmove(dest4_memmove, NULL, 5);
//     printf("Case 4 - memmove with NULL: dest=%s\n", dest4_memmove);

//     ft_memmove(dest4, NULL, 5);
//     printf("Case 4 - ft_memmove with NULL: dest=%s\n", dest4);
//     printf("Case 4 - Result: %s\n", strcmp(dest4, dest4_memmove) == 0 ? "Match" : "Mismatch");


//     return 0;
// }
