/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_advanced_sort_string_tab.c                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ryabuki <ryabuki@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/25 17:57:06 by ryabuki           #+#    #+#             */
/*   Updated: 2024/03/25 18:02:42 by ryabuki          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_advanced_sort_string_tab(char **tab, int (*cmp)(char *, char *))
{
	int		i;
	int		j;
	int		count;
	char	*tmp;

	i = 0;
	count = 0;
	while (tab[count])
		count++;
	while (i < count - 1)
	{
		j = 0;
		while (j < count - i - 1)
		{
			if (cmp(tab[j], tab[j + 1]) > 0)
			{
				tmp = tab[j];
				tab[j] = tab[j + 1];
				tab[j + 1] = tmp;
			}
			j++;
		}
		i++;
	}
}

// //ここからコメントアウト
// int	ft_strcmp(char *s1, char *s2)
// {
// 	while (*s1 != '\0' || *s2 != '\0')
// 	{
// 		if (*s1 != *s2)
// 		{
// 			return (*s1 - *s2);
// 		}
// 		s1++;
// 		s2++;
// 	}
// 	return (0);
// }
// #include <stdio.h>
// int main() {
//     // テスト用の文字列配列
//     char *strings[] = {"banana", "apple", 
//			"orange", "grape", "pineapple", NULL};

//     // 配列をASCII順にソート
//     ft_advanced_sort_string_tab(strings, ft_strcmp);

//     // ソートされた配列の内容を表示
//     printf("Sorted strings:\n");
//     for (int i = 0; strings[i] != NULL; i++) {
//         printf("%s\n", strings[i]);
//     }

//     return 0;
// }