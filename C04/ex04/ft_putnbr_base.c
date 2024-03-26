/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ryabuki <ryabuki@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/22 17:41:15 by yabukirento       #+#    #+#             */
/*   Updated: 2024/03/23 08:12:45 by ryabuki          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

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

int	ft_same_check(char *str)
{
	int	i;
	int	j;

	i = 0;
	while (i < ft_len(str) - 1)
	{
		j = i + 1;
		while (j < ft_len(str))
		{
			if (str[i] == str[j])
				return (-1);
			j++;
		}
		i++;
	}
	return (1);
}

void	ft_from_deci(long nbr, char *base)
{
	char	c;

	if (nbr >= ft_len(base))
		ft_from_deci(nbr / ft_len(base), base);
	c = base[nbr % ft_len(base)];
	write(1, &c, 1);
}

void	ft_putnbr_base(int nbr, char *base)
{
	long	num;

	num = nbr;
	if (ft_len(base) < 2 || ft_same_check(base) == -1)
		return ;
	if (num < 0)
	{
		write(1, "-", 1);
		num = -num;
	}
	ft_from_deci(num, base);
}

// int	main()
// {
// 	ft_putnbr_base(31, "0123456789abcdef");
// 	write(1,"\n",1);
// 	return 0;
// }
