/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_uppercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ryabuki <ryabuki@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/12 07:35:04 by yabukirento       #+#    #+#             */
/*   Updated: 2024/03/12 11:34:34 by ryabuki          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_uppercase(char *str)
{
	while (*str != '\0')
	{
		if (!(*str >= 'A' && *str <= 'Z'))
		{
			return (0);
		}
		str++;
	}
	return (1);
}

// #include <stdio.h>

// int main(void)
// {
//     char str01[] = "fahhkfh";
//     printf("std01 : %d\n", ft_str_is_uppercase(str01));
//     char str02[] = "fahhkSCAadf";
//     printf("std02 : %d\n", ft_str_is_uppercase(str02));
//     char str03[] = "fahhdak32va";
//     printf("std03 : %d\n", ft_str_is_uppercase(str03));
//     char str04[] = "fah'$fval";
//     printf("std04 : %d\n", ft_str_is_uppercase(str04));
//     char str05[] = "32942365";
//     printf("std05 : %d\n", ft_str_is_uppercase(str05));
//     char str06[] = "HQAGRTRH";
//     printf("std06 : %d\n", ft_str_is_uppercase(str06));
//     char str07[] = "";
//     printf("std07 : %d\n", ft_str_is_uppercase(str07));
//     return (0);
// }