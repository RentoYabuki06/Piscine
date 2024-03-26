/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ryabuki <ryabuki@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/14 14:58:46 by ryabuki           #+#    #+#             */
/*   Updated: 2024/03/16 10:13:50 by ryabuki          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_recursive_power(int nb, int power)
{
	if (power < 0)
		return (0);
	if (nb == 0 || power == 0)
		return (1);
	else if (nb == 0)
		return (0);
	else
		return (nb * ft_recursive_power(nb, power - 1));
}

// #include <stdio.h>
// int main()
// {
//     int nb = 2;
//     int power = 0;
//     printf("[%d]を[%d]乗した数字は[%d]",nb ,power, ft_recursive_power(nb, power));
//     return(0);
// }
