/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ryabuki <ryabuki@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/14 14:58:46 by ryabuki           #+#    #+#             */
/*   Updated: 2024/03/16 09:59:19 by ryabuki          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_power(int nb, int power)
{
	int	i;
	int	ans;

	i = 0;
	ans = 1;
	if (power < 0)
		return (0);
	else if (nb == 0 && power == 0)
		return (1);
	else if (nb == 0)
		return (0);
	while (i < power)
	{
		ans *= nb;
		i++;
	}
	return (ans);
}

// #include <stdio.h>
// int main()
// {
// 	int nb = -2;
// 	int power = 0;
// 	printf("[%d]を[%d]乗した数字は[%d]",nb ,power, ft_iterative_power(nb, power));
// 	return(0);
// }
