/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_alpha.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ryabuki <ryabuki@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/12 07:35:04 by yabukirento       #+#    #+#             */
/*   Updated: 2024/03/20 08:18:23 by ryabuki          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_alpha(char *str)
{
	while (*str != '\0')
	{
		if (!((*str >= 'A' && *str <= 'Z') || (*str >= 'a' && *str <= 'z')))
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
//     printf("std01 : %d\n", ft_str_is_alpha(str01));
//     char str02[] = "fahhkSCAadf";
//     printf("std02 : %d\n", ft_str_is_alpha(str02));
//     char str03[] = "fahhdak32va";
//     printf("std03 : %d\n", ft_str_is_alpha(str03));
//     char str04[] = "fah'$fval";
//     printf("std04 : %d\n", ft_str_is_alpha(str04));
//     char str05[] = "32942365";
//     printf("std05 : %d\n", ft_str_is_alpha(str05));
//     char str06[] = "";
//     printf("std06 : %d\n", ft_str_is_alpha(str06));
//     return (0);
// }