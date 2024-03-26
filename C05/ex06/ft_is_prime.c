/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_prime.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ryabuki <ryabuki@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/15 09:54:18 by ryabuki           #+#    #+#             */
/*   Updated: 2024/03/18 11:12:29 by ryabuki          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_is_prime(int nb)
{
	int	i;

	if (nb <= 1)
		return (0);
	else
	{
		i = 2;
		while (i <= nb / i)
		{
			if (nb % i == 0)
				return (0);
				i++;
		}
		return (1);
	}
}

// #include <stdio.h>
// #include <stdlib.h>

// int main(int argc, char *argv[])
// {
// 	(void) argc;
// 	int num = atoi(argv[1]);
// 	printf("prime number[%d]? ans is [%d]", num, ft_is_prime(num));
// 	return (0);
// }
