/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_convert_base2.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yabukirento <yabukirento@student.42.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/26 10:56:16 by ryabuki           #+#    #+#             */
/*   Updated: 2024/03/27 07:44:30 by yabukirento      ###   ########.fr       */
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

int	ft_len(char *str)
{
	int	count;

	count = 0;
	while (str[count])
	{
		if (str[count] == '+' || str[count] == '-' )
			return (-1);
		count++;
	}
	return (count);
}

int	ft_len_num(long nbr)
{
    int count = 0;
    if (nbr == 0)
        return (1);
    while (nbr != 0)
    {
        nbr /= 10;
        count++;
    }
    return (count);
}

int ft_len_digits(long num, char *base)
{
	int	len;

	len = 0;
    while (num >= ft_len(base))
    {
        num /= ft_len(base);
        len++;
    }
	return (len);
}

char	*ft_from_deci(int nbr, char *base)
{
    long	num;
    int		len;
	int		index;
	char	*result;

	num = nbr;
    if (num < 0)
        num = -num;
	len = 1 + ft_len_digits(num, base);
    if (nbr < 0)
        len++;
    result = (char *)malloc(sizeof(char) * (len + 1));
    if (result == NULL)
        return NULL;
    index = len - 1;
    while (num >= ft_len(base))
    {
        result[index--] = base[num % ft_len(base)];
        num /= ft_len(base);
    }
    result[index] = base[num];
    if (nbr < 0)
        result[0] = '-';
    result[len] = '\0';
    return result;
}