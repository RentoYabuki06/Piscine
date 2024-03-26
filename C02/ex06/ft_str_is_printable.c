/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_printable.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ryabuki <ryabuki@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/12 07:35:04 by yabukirento       #+#    #+#             */
/*   Updated: 2024/03/12 12:59:44 by ryabuki          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_printable(char *str)
{
	while (*str != '\0')
	{
		if (!(*str >= ' ' && *str <= '~'))
		{
			return (0);
		}
		str++;
	}
	return (1);
}

// #include <stdio.h>

// int	main(void)
// {
// 	char str01[] = "fahhkfh";
// 	printf("std01 : %d\n", ft_str_is_printable(str01));
// 	char str02[] = "fahhkSCAadf";
// 	printf("std02 : %d\n", ft_str_is_printable(str02));
// 	char str03[] = "fahhdak32va";
// 	printf("std03 : %d\n", ft_str_is_printable(str03));
// 	char str04[] = "fah'$fval";
// 	printf("std04 : %d\n", ft_str_is_printable(str04));
// 	char str05[] = "32942365";
// 	printf("std05 : %d\n", ft_str_is_printable(str05));
// 	char str06[] = "HQAGR\nTRH";
// 	printf("std06 : %d\n", ft_str_is_printable(str06));
// 	char str07[] = "";
// 	printf("std07 : %d\n", ft_str_is_printable(str07));
// 	return (0);
// }