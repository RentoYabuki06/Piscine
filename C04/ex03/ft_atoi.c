/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ryabuki <ryabuki@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/13 16:58:38 by ryabuki           #+#    #+#             */
/*   Updated: 2024/03/24 07:06:29 by ryabuki          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_atoi(char *str)
{
	int		i;
	int		sign;
	long	ans;

	i = 0;
	ans = 0;
	sign = 1;
	while ((str[i] >= 9 && str[i] <= 13) || str[i] == ' ')
		i++;
	while (str[i] == '+' || str[i] == '-')
	{
		if (str[i] == '-')
			sign *= -1;
		i++;
	}
	while (str[i] >= '0' && str[i] <= '9')
	{
		ans *= 10;
		ans += str[i] - '0';
		i++;
	}
	return ((int)ans * sign);
}

// #include <stdio.h>
// int	main(void){
//     char str[] = "      --++-+--2147483648";
// 	printf("変換されたInt型の文字列は[%d]です\n", ft_atoi(str));
//     char str1[] = "      -++-+--2147483647";
// 	printf("変換されたInt型の文字列は[%d]です\n", ft_atoi(str1));
//     char str2[] = "  --0";
// 	printf("変換されたInt型の文字列は[%d]です\n", ft_atoi(str2));
//     char str3[] = " --+-1234567890";
// 	printf("変換されたInt型の文字列は[%d]です\n", ft_atoi(str3));
//     char str4[] = " -+ 1234567890";
// 	printf("変換されたInt型の文字列は[%d]です\n", ft_atoi(str4));
//     return (0);
// }