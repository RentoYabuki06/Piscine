/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strupcase.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ryabuki <ryabuki@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/12 07:35:04 by yabukirento       #+#    #+#             */
/*   Updated: 2024/03/12 13:00:59 by ryabuki          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strupcase(char *str)
{
	char	*temp;

	temp = str;
	while (*str != '\0')
	{
		if (*str >= 'a' && *str <= 'z')
		{
			*str -= 32;
		}
		str++;
	}
	return (temp);
}

// #include <stdio.h>

// int	main(void)
// {
// 	char str01[] = "fahhkfh";
// 	printf("std01 : %s\n", ft_strupcase(str01));
// 	char str02[] = "fahhkSCAadf";
// 	printf("std02 : %s\n", ft_strupcase(str02));
// 	char str03[] = "fahhdak32va";
// 	printf("std03 : %s\n", ft_strupcase(str03));
// 	char str04[] = "fah'$fval";
// 	printf("std04 : %s\n", ft_strupcase(str04));
// 	char str05[] = "32942365";
// 	printf("std05 : %s\n", ft_strupcase(str05));
// 	char str06[] = "HQAGRTRH";
// 	printf("std06 : %s\n", ft_strupcase(str06));
// 	char str07[] = "";
// 	printf("std07 : %s\n", ft_strupcase(str07));
// 	return (0);
// }