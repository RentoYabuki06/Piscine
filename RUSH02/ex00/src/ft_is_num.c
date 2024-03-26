/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_numeric.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yuotsubo <yuotsubo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/08 01:37:58 by yuotsubo          #+#    #+#             */
/*   Updated: 2024/03/23 21:10:29 by yuotsubo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/rush-02.h"

int	ft_is_num(char c)
{
	if (c >= '0' && c <= '9')
		return (1);
	return (0);
}

// int	ft_str_is_numeric(char *str)
// {
// 	size_t	i;

// 	if (!str || str[0] == '\0')
// 		return (1);
// 	i = 0;
// 	while (str[i] != '\0')
// 	{
// 		if (!ft_is_num(str[i]))
// 			return (0);
// 		i++;
// 	}
// 	return (1);
// }
/*
int	main(void)
{
	char str1[] = "HelloWorld";
	char str2[] = "Hello42!!";
	char str3[] = "1234567890";
	char str4[] = "";

	printf("str: %s\nres: %d\n\n", str1, ft_str_is_numeric(str1));
	printf("str: %s\nres: %d\n\n", str2, ft_str_is_numeric(str2));
	printf("str: %s\nres: %d\n\n", str3, ft_str_is_numeric(str3));
	printf("str: %s\nres: %d\n\n", str4, ft_str_is_numeric(str4));
	return (0);
}
*/
