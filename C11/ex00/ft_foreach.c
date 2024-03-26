/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_foreach.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ryabuki <ryabuki@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/25 09:20:46 by ryabuki           #+#    #+#             */
/*   Updated: 2024/03/25 18:49:13 by ryabuki          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

// void	ft_zero_negative(int *num)
// {
// 	if (*num == 0)
// 	{
// 		write(1, "0", 1);
// 	}
// 	else
// 	{
// 		if (*num < 0)
// 		{
// 			write(1, "-", 1);
// 			*num = -*num;
// 		}
// 	}
// }

// void	ft_putnbr(int nb)
// {
// 	int		i;
// 	char	str[12];

// 	i = -1;
// 	if (nb == -2147483648)
// 		write(1, "-2147483648", 11);
// 	else
// 	{
// 		ft_zero_negative(&nb);
// 		while (nb > 0)
// 		{
// 			i++;
// 			str[i] = nb % 10 + '0';
// 			nb /= 10;
// 		}
// 		while (i >= 0)
// 		{
// 			write(1, &str[i], 1);
// 			i--;
// 		}
// 	}
// }

void	ft_foreach(int *tab, int length, void (*f)(int))
{
	int	i;

	i = 0;
	while (i < length)
	{
		f(tab[i]);
		i++;
	}
}

// int	main()
// {
// 	int tab[] = {42, -1337, 0, 987};
// 	int length = sizeof(tab) / sizeof(tab[0]);
// 	ft_foreach(tab, length, &ft_putnbr);
// 	return 0;
// }