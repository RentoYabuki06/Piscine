/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ryabuki <ryabuki@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/12 07:35:04 by yabukirento       #+#    #+#             */
/*   Updated: 2024/03/21 15:29:21 by ryabuki          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strcapitalize(char *str)
{
	int	i;
	int	flag;

	i = 0;
	flag = 1;
	while (str[i] != '\0')
	{
		if ((str[i] >= 'a' && str[i] <= 'z') && flag == 1)
			str[i] -= 32;
		else if ((str[i] >= 'A' && str[i] <= 'Z') && flag == 0)
			str[i] += 32;
		if ((str[i] >= 'a' && str[i] <= 'z'))
			flag = 0;
		else if ((str[i] >= 'A' && str[i] <= 'Z'))
			flag = 0;
		else if ((str[i] >= '0' && str[i] <= '9'))
			flag = 0;
		else
			flag = 1;
		i++;
	}
	return (str);
}

// #include <stdio.h>

// int	main(void)
// {
// 	char str01[] = "salut, comment tu vas ?";
// 	printf("<<< std01>>>\nBefore : [%s]\n",str01);
// 	printf("After : [%s]\n", ft_strcapitalize(str01));
// 	char str02[] = "42mots quarante-deux; cinquante+et+un";
// 	printf("<<< std02>>>\nBefore : [%s]\n",str02);
// 	printf("After : [%s]\n", ft_strcapitalize(str02));
// 	char str03[] = "fahhdak32va";
// 	printf("<<< std03>>>\nBefore : [%s]\n",str03);
// 	printf("After : [%s]\n", ft_strcapitalize(str03));
// 	char str04[] = "fah'$fval";
// 	printf("<<< std04>>>\nBefore : [%s]\n",str04);
// 	printf("After : [%s]\n", ft_strcapitalize(str04));
// 	char str05[] = "32942365";
// 	printf("<<< std05>>>\nBefore : [%s]\n",str05);
// 	printf("After : [%s]\n", ft_strcapitalize(str05));
// 	char str06[] = "HQAGRTRH";
// 	printf("<<< std06>>>\nBefore : [%s]\n",str06);
// 	printf("After : [%s]\n", ft_strcapitalize(str06));
// 	char str07[] = "";
// 	printf("<<< std7>>>\nBefore : [%s]\n",str07);
// 	printf("After : [%s]\n", ft_strcapitalize(str07));
// 	return (0);
// }