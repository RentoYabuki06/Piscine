/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yabukirento <yabukirento@student.42.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/19 14:53:55 by yabukirento       #+#    #+#             */
/*   Updated: 2024/04/19 15:48:40 by yabukirento      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isalpha(int c)
{
	if ((c >= 'A' && c <= 'Z') || (c >= 'a' && c <= 'z'))
		return (1);
	else
		return (0);
}

// #include <ctype.h>
// #include <stdio.h>

// int main(int argc, char *argv[])
// {
// 	if (argc != 2)
// 	{
// 		printf("Not accepted");
// 		return 0;
// 	}
// 	char c = argv[1][0];//1文字目を取得
// 	printf("Made by me : [%d]\n", ft_isalpha(c));
// 	printf("Standard function : [%d]\n", isalpha(c));
// 	return 0;
// }