/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_convert_base.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yabukirento <yabukirento@student.42.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/18 15:56:11 by ryabuki           #+#    #+#             */
/*   Updated: 2024/03/27 08:01:46 by yabukirento      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdlib.h>
long		ft_base_check(char *base);
int		ft_len(char *str);
int		ft_len_num(long nbr);
int		ft_len_digits(long num, char *base);
char	*ft_from_deci(int nbr, char *base);
int		ft_strcmp(char *s1, char *s2);
int		ft_strlen_base(char *str, char *base);
long	ft_str_len(char *str, char *base);
void	ft_to_deci(char *str, char *base, long *ans, long tmp);
int		ft_atoi_base(char *str, char *base);
int		ft_to_decimal(char *nbr, char *base_from);

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


int ft_strlen_base(char *str, char *base)
{
    int i = 0;
    int j = 0;
    int count = 0;

    while (str[i] != '\0' && count == i)
    {
        j = 0;
        while (base[j] != '\0')
        {
            if (base[j] == str[i])
            {
                count++;
                break;
            }
            j++;
        }
        i++;
    }
    return (count);
}
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
	num = ft_to_decimal(nbr, base_from);
	result = ft_from_deci(num, base_to);
	return (result);
}


#include <stdio.h>
#include <limits.h>
int main()
{
	printf("<<<<<<  binary -101 to decimal  >>>>>>\n");
	char *nbr1 = "-101"; // 5 in binary
	char *base_from1 = "01"; // binary
	char *base_to1 = "0123456789"; // decimal
	printf("ideal : [-5]\n");
	printf("real :[%s]\n", ft_convert_base(nbr1, base_from1, base_to1));

	char *nbr2 = "5"; // 5 in decimal
	char *base_from2 = "0123456789"; // decimal
	char *base_to2 = "01"; // binary
	printf("<<<<<<  decical 5 to binary  >>>>>>\n");
	printf("ideal : [101]\n");
	printf("real :[%s]\n", ft_convert_base(nbr2, base_from2, base_to2));

	char *nbr3 = "31"; // 25 in decimal
	char *base_from3 = "0123456789"; // decimal
	char *base_to3 = "0123456789ABCDEF"; // hexadecimal
	printf("<<<<<<  decical 25 to hexadecimal  >>>>>>\n");
	printf("ideal : [1f]\n");
	printf("real :[%s]\n", ft_convert_base(nbr3, base_from3, base_to3));

	char *nbr4 = "FF"; // 255 in hexadecimal
	char *base_from4 = "0123456789ABCDEF"; // hexadecimal
	char *base_to4 = "01234567"; // octal
	printf("<<<<<<  hexadecimal FF to octal  >>>>>>\n");
	printf("ideal : [377]\n");
	printf("real :[%s]\n", ft_convert_base(nbr4, base_from4, base_to4));

	char *nbr5 = "777"; // 511 in octal
	char *base_from5 = "01234567"; // octal
	char *base_to5 = "01"; // binary
	printf("<<<<<<  octal 777 to binary  >>>>>>\n");
	printf("ideal : [1111111111]\n");
	printf("real :[%s]\n", ft_convert_base(nbr5, base_from5, base_to5));

	// テストパターン1: 0を変換する
    char *nbr0 = "0";
    char *base_from0 = "01"; // binary
    char *base_to0 = "0123456789"; // decimal
    printf("<<<<<<  0 to 0  >>>>>>\n");
    printf("ideal : [0]\n");
    printf("real :[%s]\n", ft_convert_base(nbr0, base_from0, base_to0));

    // テストパターン2: INT_MINを変換する
    char *nbr_int_min = "-2147483648";
    char *base_from_int_min = "0123456789"; // decimal
    char *base_to_int_min = "01"; // binary
	printf("<<<<<<  int min to binary  >>>>>>\n");
    printf("ideal : [-10000000000000000000000000000000]\n"); // 2の補数形式
    printf("real :[%s]\n", ft_convert_base(nbr_int_min, base_from_int_min, base_to_int_min));

    // テストパターン3: INT_MAXを変換する
    char *nbr_int_max = "2147483647";
    char *base_from_int_max = "0123456789"; // 10進数から
    char *base_to_int_max = "0123456789abcdef"; // 16進数へ
	printf("<<<<<<  int min to hexademical  >>>>>>\n");
    printf("ideal : [7FFFFFFF]\n"); // 32ビットの場合
    printf("real :[%s]\n", ft_convert_base(nbr_int_max, base_from_int_max, base_to_int_max));

	printf("<<<<<<  binary -101 to decimal (space and sign is OK)   >>>>>>\n");
	char *nbr11 = "   ----++--101"; // 5 in binary
	char *base_from11 = "01"; // binary
	char *base_to11 = "0123456789"; // decimal
	printf("ideal : [-5]\n");
	printf("real :[%s]\n", ft_convert_base(nbr11, base_from11, base_to11));

	printf("<<<<<<  binary -101 to decimal (space after sign is NG)  >>>>>>\n");
	char *nbr21 = " --- 101"; // 5 in binary
	char *base_from21 = "01"; // binary
	char *base_to21 = "0123456789"; // decimal
	printf("ideal : [0]\n");
	printf("real :[%s]\n", ft_convert_base(nbr21, base_from21, base_to21));
	
	printf("<<<<<<  binary -101 to decimal (space or sign between number is NG)  >>>>>>\n");
	char *nbr31 = "-101-101"; // 5 in binary
	char *base_from31 = "01"; // binary
	char *base_to31 = "0123456789"; // decimal
	printf("ideal : [-5]\n");
	printf("real :[%s]\n", ft_convert_base(nbr31, base_from31, base_to31));
    return(0);
}
