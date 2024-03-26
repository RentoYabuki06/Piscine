/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi_base.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ryabuki <ryabuki@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/22 17:41:15 by yabukirento       #+#    #+#             */
/*   Updated: 2024/03/24 07:15:59 by ryabuki          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

long	ft_str_len(char *str, char *base)
{
	long	count;
	long	j;

	count = 0;
	while (str[count])
	{
		j = 0;
		while (base[j])
		{
			if (str[count] == base[j])
			{
				count++;
				break ;
			}
			j++;
		}
		if (!base[j])
			break ;
	}
	return (count);
}

long	ft_base_check(char *base)
{
	long	i;
	long	j;
	long	count;

	count = 0;
	while (base[count])
	{
		if (base[count] == '+' || base[count] == '-'
			|| base[count] == ' ' || (base[count] >= 9 && base[count] <= 13))
			return (-1);
		count++;
	}
	i = 0;
	while (i < count - 1)
	{
		j = i + 1;
		while (j < count)
		{
			if (base[i] == base[j])
				return (-1);
			j++;
		}
		i++;
	}
	return (count);
}

void	ft_to_deci(char *str, char *base, long *ans, long tmp)
{
	long	i;
	long	j;
	long	str_len;

	i = 0;
	while (str[i])
	{
		j = 0;
		str_len = ft_str_len(str, base);
		while (base[j])
		{
			if (str[i] == base[j])
			{
				tmp = j;
				while (--str_len > i)
					tmp *= ft_base_check(base);
				*ans += tmp;
				i++;
				break ;
			}
			j++;
		}
		if (!base[j])
			return ;
	}
}

int	ft_atoi_base(char *str, char *base)
{
	long		i;
	long		sign;
	long		ans;
	char		*tmp;

	i = 0;
	ans = 0;
	sign = 1;
	if (ft_base_check(base) == -1)
		return (0);
	while ((str[i] >= 9 && str[i] <= 13) || str[i] == ' ')
		i++;
	while (str[i] == '+' || str[i] == '-')
	{
		if (str[i] == '-')
			sign *= -1;
		i++;
	}
	tmp = str + i;
	ft_to_deci(tmp, base, &ans, 0);
	return ((int)ans * sign);
}

// #include <stdio.h>
// int	main()
// {
// 	char *str01 = "bc  ";
// 	char *base01 = "0123456789abcdef";
// 	printf("\n<<<<  case01   >>>>\n");
// 	printf("str is[%s]\nbase is [%s]\n",str01, base01);
// 	printf("Return is [%d]\n",ft_atoi_base(str01, base01));
// 	char *str02 = "1101";
// 	char *base02 = "01";
// 	printf("\n<<<<  case02   >>>>\n");
// 	printf("str is[%s]\nbase is [%s]\n",str02, base02);
// 	printf("Return is [%d]\n",ft_atoi_base(str02, base02));
// 	char *str03 = "    -+--bc--++ ";
// 	char *base03 = "0123456789abcdef";
// 	printf("\n<<<<  case03   >>>>\n");
// 	printf("str is[%s]\nbase is [%s]\n",str03, base03);
// 	printf("Return is [%d]\n",ft_atoi_base(str03, base03));
// 	char *str04 = "    -+--bc--++ ";
// 	char *base04 = "012345+789abcdef";
// 	printf("\n<<<<  case04 sign in base  >>>>\n");
// 	printf("str is[%s]\nbase is [%s]\n",str04, base04);
// 	printf("Return is [%d]\n",ft_atoi_base(str04, base04));
// 	char *str05 = "    -+--bc--++ ";
// 	char *base05 = "0";
// 	printf("\n<<<<  case05 base is single digit  >>>>\n");
// 	printf("str is[%s]\nbase is [%s]\n",str05, base05);
// 	printf("Return is [%d]\n",ft_atoi_base(str05, base05));
// 	char *str06 = "    -+--bc--++ ";
// 	char *base06 = "01234 6789abcdef";
// 	printf("\n<<<<  case06 space in base  >>>>\n");
// 	printf("str is[%s]\nbase is [%s]\n",str06, base06);
// 	printf("Return is [%d]\n",ft_atoi_base(str06, base06));
// 	char *str07 = "    -+-- bc--++ ";
// 	char *base07 = "0123456789abcdef";
// 	printf("\n<<<<  case07 space between sign and number   >>>>\n");
// 	printf("str is[%s]\nbase is [%s]\n",str07, base07);
// 	printf("Return is [%d]\n",ft_atoi_base(str07, base07));
// 	return 0;
// }
