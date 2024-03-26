/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_any.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ryabuki <ryabuki@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/25 09:39:03 by ryabuki           #+#    #+#             */
/*   Updated: 2024/03/25 10:52:32 by ryabuki          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_any(char **tab, int (*f)(char*))
{
	int	i;
	int	count;

	i = 0;
	count = 0;
	while (tab[count])
		count++;
	while (i < count)
	{
		if (f(tab[i]) != 0)
			return (1);
		i++;
	}
	return (0);
}

// #include <stdio.h>
// int	ft_strlen(char *str)
// {
// 	int	i;

// 	i = 0;
// 	while (str[i] != '\0')
// 	{
// 		i++;
// 	}
// 	return (i);
// }

// // テスト用関数：文字列の長さが3以上かどうかを判定する
// int check_length(char *str) {
//     return (ft_strlen(str) >= 5) ? 1 : 0;
// }

// // テスト用 main 関数
// int main() {
//     char *tab[] = {"app", "bana", "cat", "dog", NULL};

//     // ft_any を使用して配列内の要素が3文字以上かどうかをチェック
//     int result = ft_any(tab, &check_length);

//     // 結果を出力
//     if (result == 1) {
//         printf("There is at least one element with length >= 5.\n");
//     } else {
//         printf("There is no element with length >= 5.\n");
//     }

//     return 0;
// }