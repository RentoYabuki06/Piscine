/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yabukirento <yabukirento@student.42.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/19 14:53:55 by yabukirento       #+#    #+#             */
/*   Updated: 2024/04/19 14:56:47 by yabukirento      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stddef.h>

size_t	ft_strlen(const char *str)
{
	size_t	i;

	i = 0;
	while (str[i] != '\0')
	{
		i++;
	}
	return (i);
}

// #include <string.h>
// #include <stdio.h>

// int main(int argc, char *argv[])
// {
// 	if (argc != 2)
// 	{
// 		printf("Not accepted");
// 		return 0;
// 	}
// 	char *str = argv[1];//1文字目を取得
// 	printf("Made by me : [%zu]\n", ft_strlen(str));
// 	printf("Standard function : [%lu]\n", strlen(str));
// 	return 0;
// }