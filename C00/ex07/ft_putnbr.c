/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ryabuki <ryabuki@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/08 20:37:26 by ryabuki           #+#    #+#             */
/*   Updated: 2024/03/18 07:24:53 by ryabuki          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_zero_negative(int *num)
{
	if (*num == 0)
	{
		write(1, "0", 1);
	}
	else
	{
		if (*num < 0)
		{
			write(1, "-", 1);
			*num = -*num;
		}
	}
}

void	ft_putnbr(int nb)
{
	int		i;
	char	str[12];

	i = -1;
	if (nb == -2147483648)
		write(1, "-2147483648", 11);
	else
	{
		ft_zero_negative(&nb);
		while (nb > 0)
		{
			i++;
			str[i] = nb % 10 + '0';
			nb /= 10;
		}
		while (i >= 0)
		{
			write(1, &str[i], 1);
			i--;
		}
	}
}

// int	main(void)
// {
// 	ft_putnbr(2147483647);
// 	return (0);
// }
