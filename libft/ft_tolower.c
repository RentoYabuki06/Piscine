/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tolower.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yabukirento <yabukirento@student.42.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/19 14:53:55 by yabukirento       #+#    #+#             */
/*   Updated: 2024/04/19 14:57:24 by yabukirento      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_tolower(int c)
{
	if (c >= 65 && c <= 90)
	{
		c += 32;
	}
	return (c);
}

// #include <stdio.h>
// #include <ctype.h>


// int main() {
//     // テストケース1: 大文字を渡した場合
//     int input1_ft = 'A';
//     int input1_std = 'A';

//     int result1_ft = ft_tolower(input1_ft);
//     int result1_std = tolower(input1_std);

//     // 結果の比較
//     if (result1_ft == result1_std) {
//         printf("Case 1: Results match!\n");
//     } else {
//         printf("Case 1: Results do not match!\n");
//     }

//     // 結果を表示
//     printf("Result of ft_tolower: %c\n", result1_ft);
//     printf("Result of tolower: %c\n", result1_std);

//     // テストケース2: 小文字を渡した場合
//     int input2_ft = 'a';
//     int input2_std = 'a';

//     int result2_ft = ft_tolower(input2_ft);
//     int result2_std = tolower(input2_std);

//     // 結果の比較
//     if (result2_ft == result2_std) {
//         printf("Case 2: Results match!\n");
//     } else {
//         printf("Case 2: Results do not match!\n");
//     }

//     // 結果を表示
//     printf("Result of ft_tolower: %c\n", result2_ft);
//     printf("Result of tolower: %c\n", result2_std);

//     // テストケース3: 数字を渡した場合
//     int input3_ft = '5';
//     int input3_std = '5';

//     int result3_ft = ft_tolower(input3_ft);
//     int result3_std = tolower(input3_std);

//     // 結果の比較
//     if (result3_ft == result3_std) {
//         printf("Case 3: Results match!\n");
//     } else {
//         printf("Case 3: Results do not match!\n");
//     }

//     // 結果を表示
//     printf("Result of ft_tolower: %c\n", result3_ft);
//     printf("Result of tolower: %c\n", result3_std);

//     // テストケース4: 特殊文字を渡した場合
//     int input4_ft = '$';
//     int input4_std = '$';

//     int result4_ft = ft_tolower(input4_ft);
//     int result4_std = tolower(input4_std);

//     // 結果の比較
//     if (result4_ft == result4_std) {
//         printf("Case 4: Results match!\n");
//     } else {
//         printf("Case 4: Results do not match!\n");
//     }

//     // 結果を表示
//     printf("Result of ft_tolower: %c\n", result4_ft);
//     printf("Result of tolower: %c\n", result4_std);

//     // テストケース5: NULL文字を渡した場合
//     int input5_ft = '\0';
//     int input5_std = '\0';

//     int result5_ft = ft_tolower(input5_ft);
//     int result5_std = tolower(input5_std);

//     // 結果の比較
//     if (result5_ft == result5_std) {
//         printf("Case 5: Results match!\n");
//     } else {
//         printf("Case 5: Results do not match!\n");
//     }

//     // 結果を表示
//     printf("Result of ft_tolower: %c\n", result5_ft);
//     printf("Result of tolower: %c\n", result5_std);

//     return 0;
// }
