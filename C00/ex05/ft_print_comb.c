/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ryabuki <ryabuki@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/11 11:25:47 by ryabuki           #+#    #+#             */
/*   Updated: 2024/03/18 07:22:47 by ryabuki          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print_comb(void)
{
	char	i;
	char	j;
	char	k;

	i = '0';
	while (i < '7')
	{
		j = i + 1;
		while (j < '9')
		{
			k = j + 1;
			while (k <= '9')
			{
				write(1, &i, 1);
				write(1, &j, 1);
				write(1, &k, 1);
				write(1, ", ", 2);
				k++;
			}
			j++;
		}
		i++;
	}
	write(1, "789", 3);
}

// int	main(void)
// {
// 	ft_print_comb();
// 	return (0);
// }
