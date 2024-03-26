/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ryabuki <ryabuki@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/14 14:43:17 by ryabuki           #+#    #+#             */
/*   Updated: 2024/03/16 09:58:47 by ryabuki          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_factorial(int nb)
{
	int	temp;

	temp = 1;
	if (nb < 0)
		return (0);
	else if (nb == 0)
		return (1);
	else
	{
		while (nb > 0)
		{
			temp *= nb;
			nb--;
		}
		return (temp);
	}
}

// #include <stdio.h>
// int main()
// {
//     int n = 1;
//     printf("[%d]の階乗の答えは[%d]です。", n, ft_iterative_factorial(n));
//     return(0);
// }