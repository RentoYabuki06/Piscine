/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_combn.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yabukirento <yabukirento@student.42.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/28 15:05:59 by yabukirento       #+#    #+#             */
/*   Updated: 2024/03/28 15:51:30 by yabukirento      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

void	ft_initialize(int *digits)
{
	int i;

	i = 0; 
	while (i < 10)
	{
		digits[i]  = i;
		i++;
	}
}

void	ft_putnbr(int num)
{
	int		i;
	char	nbr;

	i = 0;
	nbr = num + '0';
	write(1, &nbr, 1);
}

void	ft_print_combn(int n)
{
	int	i;
	int	j;
	int	*digits;

	ft_initialize(digits);
	while (1)
	{
		i = 0;
		while (i < n)
		{
			ft_putnbr(digits[i]);
			i++;
		}
		if (digits[0] == 9 - n  + 1)
			return ;
		if (digits[n - 1] == 9)
		{
			j = 0;
			while (digits[n - 1 - j] == 9 - j)
				j++;
			digits[n - 1 - j] += 1;
			while (j > 0)
			{
				digits[n - j] = digits[n - j - 1] + 1;
				j--;
			}
		}
		else
			digits[n - 1] += 1;
		write(1,", ",2);
	}

}

int main()
{
	int num = 4;
	ft_print_combn(num);
	return 0;

}