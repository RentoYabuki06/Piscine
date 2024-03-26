/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_combn.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ryabuki <ryabuki@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/10 09:53:51 by yabukirento       #+#    #+#             */
/*   Updated: 2024/03/11 15:46:43 by ryabuki          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_initialize(char *digits, int n)
{
	int	l;

	l = 0;
	while (l < n)
	{
		digits[l] = '0' + l;
		l++;
	}
}

void	ft_next(char *digits, int n)
{
	int	l;

	l = 0;
	if (n == 1)
	{
		return ;
	}
	while (1)
	{
		l++;
		if (digits[n - 1 - l] != '9' - l)
		{
			break ;
		}
	}
	digits[n - 1 - l] += 1;
	while (l > 0)
	{
		digits[n - 1 - l + 1] = digits[n - 1 - l] + 1;
		l--;
	}
}

void	ft_print_combn(int n)
{
	int		l;
	char	digits[10];

	ft_initialize(digits, n);
	while (1)
	{
		l = 0;
		while (l < n)
		{
			write(1, &digits[l], 1);
			l++;
		}
		if (digits[0] == '9' - n + 1)
		{
			break ;
		}
		write(1, ", ", 2);
		if (digits[n - 1] == '9')
		{
			ft_next(digits, n);
			digits[n - 1]-- ;
		}
		digits[n - 1] = digits[n - 1] + 1;
	}
}

// int	main(void)
// {
// 	ft_print_combn(4);
// 	return (0);
// }
// 