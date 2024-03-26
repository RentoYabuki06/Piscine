/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_map.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ryabuki <ryabuki@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/25 09:30:40 by ryabuki           #+#    #+#             */
/*   Updated: 2024/03/25 09:38:23 by ryabuki          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	*ft_map(int *tab, int length, int (*f)(int))
{
	int	*tmp;
	int	i;

	tmp = (int *)malloc(sizeof(int) * length);
	if (!tmp)
		return (0);
	i = 0;
	while (i < length)
	{
		tmp[i] = f(tab[i]);
		i++;
	}
	return (tmp);
}

// // テスト用 main 関数
// // 2倍にする関数
// int double_num(int num) {
//     return num * 2;
// }
// #include <stdio.h>
// int main() {
//     int tab[] = {1, 2, 3, 4, 5};
//     int length = sizeof(tab) / sizeof(tab[0]);

//     // ft_map を使用して各要素を2倍にする
//     int *result = ft_map(tab, length, &double_num);

//     // 結果を出力
//     printf("Original array:\n");
//     for (int i = 0; i < length; i++) {
//         printf("%d ", tab[i]);
//     }
//     printf("\n");

//     printf("Mapped array (doubled):\n");
//     for (int i = 0; i < length; i++) {
//         printf("%d ", result[i]);
//     }
//     printf("\n");

//     // 結果の配列を解放
//     free(result);

//     return 0;
// }