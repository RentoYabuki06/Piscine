/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_count_if.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ryabuki <ryabuki@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/25 10:53:53 by ryabuki           #+#    #+#             */
/*   Updated: 2024/03/25 11:01:27 by ryabuki          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_count_if(char **tab, int length, int (*f)(char*))
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	while (i < length)
	{
		if (f(tab[i]) != 0)
			j++;
		i++;
	}
	return (j);
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
//#include <stdio.h>
// int main() {
//     char *tab[] = {"apple", "banana", "cat", "dog", NULL};

//     printf("[%d]\n",ft_count_if(tab, 4, &check_length));
//     return 0;
// }