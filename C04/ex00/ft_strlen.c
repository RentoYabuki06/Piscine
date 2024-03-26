/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ryabuki <ryabuki@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/13 16:21:24 by ryabuki           #+#    #+#             */
/*   Updated: 2024/03/14 12:55:28 by ryabuki          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		i++;
	}
	return (i);
}

// #include <stdio.h>

// int	main(void)
// {
// 	char	str01[] = "abc0123def";
// 	printf("str01[%s]の文字数は[%d]です\n", str01,ft_strlen(str01));
// 	char	str02[] = "ABC0123defghIJK";
// 	printf("str02[%s]の文字数は[%d]です\n", str02,ft_strlen(str02));
// 	char	str03[] = "ABC012.,3defg/*&hIJK";
// 	printf("str03[%s]の文字数は[%d]です\n", str03,ft_strlen(str03));
// 	return (0);
// }