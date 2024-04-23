/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yabukirento <yabukirento@student.42.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/19 14:53:55 by yabukirento       #+#    #+#             */
/*   Updated: 2024/04/23 16:12:02 by yabukirento      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_atoi(const char *str)
{
	int			i;
	int			sign;
	long long	ans;

	i = 0;
	ans = 0;
	sign = 1;
	while ((str[i] >= 9 && str[i] <= 13) || str[i] == ' ')
		i++;
	if (str[i] == '+' || str[i] == '-')
	{
		if (str[i] == '-')
			sign = -1;
		i++;
	}
	while (str[i] >= '0' && str[i] <= '9')
	{
		if (ans > (INT64_MAX / 10))
		{
			if (sign == 1)
				return (-1);
			if (sign == -1)
				return (0);
		}
		if (ans == (INT64_MAX / 10) && (str[i] >= '8' && str[i] <= '9'))
		{
			if (sign == 1)
				return (-1);
			if (sign == -1)
				return (0);
		}
		ans *= 10;
		ans += str[i] - '0';
		i++;
	}
	return ((int)ans * sign);
}
