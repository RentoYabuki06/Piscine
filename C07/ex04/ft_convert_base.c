/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_convert_base.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ryabuki <ryabuki@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/18 15:56:11 by ryabuki           #+#    #+#             */
/*   Updated: 2024/03/26 15:29:36 by ryabuki          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdlib.h>
int		ft_len(char *str);
int		ft_same_check(char *str);
char	*ft_from_deci(int nbr, char *base);
int		ft_strcmp(char *s1, char *s2);
int		ft_strlen_base(char *str, char *base);
int		ft_atoi_base(char *str, char *base);
char	*ft_from_deci(int nbr, char *base);
char	*ft_convert_base(char *nbr, char *base_from, char *base_to);
int		ft_len_num(long nbr);
long	ft_base_check(char *base);

int	ft_strcmp(char *s1, char *s2)
{
	while (*s1 != '\0' || *s2 != '\0')
	{
		if (*s1 != *s2)
		{
			return (*s1 - *s2);
		}
		s1++;
		s2++;
	}
	return (0);
}

int	ft_strlen_base(char *str, char *base)
{
	int		i;
	int		j;
	int		count;

	i = 0;
	count = 0;
	while (str[i] != '\0' && count == i)
	{
		j = 0;
		while (base[j] != '\0')
		{
			if (base[j] == str[i])
			{
				count++;
			}
			j++;
		}
		i++;
	}
	if (i != count)
	{
		return (-1);
	}
	return (i);
}

int	ft_atoi_base(char *str, char *base)
{
	int j;
	int k;
	int ans;
	int tmp;
	int base_len;
	
	ans = 0;
	j = 0;
	base_len = ft_len(base);
	while (str[j])
	{
		k = 0;
		tmp = 0;
		while (base[k])
        {
            if (str[j] == base[k])
			{
				tmp += base_len - k - 1;
				while (k-- > 0)
					tmp *= base_len;
				break;
			}
			k++;
        }
		ans += tmp;
		j++;
	}
	return (ans);
}

int    ft_to_decimal(char *nbr, char *base_from)
{
	int		i;
	int		j;
    int		sign;
	char	*str;

	sign = 1;
	i = 0;
	while ((nbr[i] >= 9 && nbr[i] <= 13) || nbr[i] == ' ')
		i++;
	while (nbr[i] == '+' || nbr[i] == '-')
	{
		if (nbr[i] == '-')
			sign *= -1;
		i++;
	}
	nbr += i;
	if (ft_strlen_base(nbr, base_from) < 1)
		return (-1);
	str = (char *)malloc(sizeof(char) * (ft_strlen_base(nbr, base_from) + 1));
	j = -1;
	while (++j < ft_strlen_base(nbr, base_from))
		str[j] =  nbr[j];
	return (sign * ft_atoi_base(str, base_from));
}

char	*ft_convert_base(char *nbr, char *base_from, char *base_to)
{
	char	*result;
	int		num;

	if (!nbr || ft_base_check(base_from) < 2 || ft_base_check(base_to) < 2)
		return (0);
	if (ft_to_decimal(nbr, base_from) < 0)
		return (0);
	num = ft_to_decimal(nbr, base_from);
	result = ft_from_deci(num, base_to);
	return (result);
}

#include <stdio.h>

int main()
{
	char *nbr1 = "101"; // 5 in binary
	char *base_from1 = "01"; // binary
	char *base_to1 = "0123456789"; // decimal
	printf("ideal : [5]\n");
	printf("real :[%s]\n", ft_convert_base(nbr1, base_from1, base_to1));

	char *nbr2 = "5"; // 5 in decimal
	char *base_from2 = "0123456789"; // decimal
	char *base_to2 = "01"; // binary
	printf("ideal : [101]\n");
	printf("real :[%s]\n", ft_convert_base(nbr2, base_from2, base_to2));

	char *nbr3 = "5"; // 5 in decimal
	char *base_from3 = "0123456789"; // decimal
	char *base_to3 = "0123456789ABCDEF"; // hexadecimal
	printf("ideal : [5]\n");
	printf("real :[%s]\n", ft_convert_base(nbr3, base_from3, base_to3));

	char *nbr4 = "FF"; // 255 in hexadecimal
	char *base_from4 = "0123456789ABCDEF"; // hexadecimal
	char *base_to4 = "01234567"; // octal
	printf("ideal : [377]\n");
	printf("real :[%s]\n", ft_convert_base(nbr4, base_from4, base_to4));

	char *nbr5 = "777"; // 511 in octal
	char *base_from5 = "01234567"; // octal
	char *base_to5 = "01"; // binary
	printf("ideal : [1111111111]\n");
	printf("real :[%s]\n", ft_convert_base(nbr5, base_from5, base_to5));

    return(0);
}

