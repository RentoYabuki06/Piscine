/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ryabuki <ryabuki@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/08 20:37:26 by ryabuki           #+#    #+#             */
/*   Updated: 2024/03/14 08:47:01 by ryabuki          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_number(char i, char j)
{
	char	k;
	char	l;

	k = i;
	while (k <= '9')
	{
		l = '0';
		while (l <= '9')
		{
			if (i < k || (i == k && j < l))
			{
				write(1, &i, 1);
				write(1, &j, 1);
				write(1, " ", 1);
				write(1, &k, 1);
				write(1, &l, 1);
				write(1, ", ", 2);
			}
			l++;
		}
		k++;
	}
}	

void	ft_print_comb2(void)
{
	char	i;
	char	j;

	i = '0';
	while (i <= '9')
	{
		j = '0';
		while (j <= '9')
		{
			if (i == '9' && j == '8')
			{
				write(1, "98", 2);
				write(1, " ", 1);
				write(1, "99", 2);
				break ;
			}
			ft_number(i, j);
			j++;
		}
		i++;
	}
}

// int	main(void)
// {
// 	ft_print_comb2();
// 	return (0);
// }
