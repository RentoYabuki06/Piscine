/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   s.c                                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yonuma <yonuma@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/24 08:52:20 by ryabuki           #+#    #+#             */
/*   Updated: 2024/03/24 20:56:23 by yonuma           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/rush-02.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int	search(int unit, int checknum, t_entry *array[10])
{
	if (checknum / 100 != 0)
		if (ft_third_digits(checknum / 100, array) != 0)
			return (1);
	if (checknum / 10 != 0)
		if (ft_second_digits(checknum % 100, array) != 0)
			return (1);
	if (checknum % 10 != 0 && (checknum % 100 >= 20 || checknum % 100 < 10))
		if (ft_first_digits(checknum % 10, array) != 0)
			return (1);
	if (unit > 0 && checknum != 0)
		if (ft_unit(unit, array) != 0)
			return (1);
	return (0);
}

int	ft_check(char *str)
{
	int	i;
	int	sign;

	i = 0;
	sign = 1;
	while ((str[i] >= 9 && str[i] <= 13) || str[i] == ' ')
		i++;
	while (str[i] == '+' || str[i] == '-')
	{
		if (str[i] == '-')
			sign *= -1;
		i++;
	}
	while (str[i] == '0')
		i++;
	str += i;
	if (sign == -1 || !(*str >= '0' && *str <= '9'))
	{
		ft_putstr("Error\n");
		return (-1);
	}
	return (i);
}

int	info(char *str, t_entry *array[10])
{
	int	checknum;
	int	unit;
	int	i;
	int	tmp;

	if (ft_check(str) == -1)
		return (1);
	str += ft_check(str);
	i = length(str) - 1;
	while (i >= 0)
	{
		if (length(str) % 3 != 0)
			tmp = length(str) % 3;
		else
			tmp = 3;
		unit = i / tmp;
		checknum = ft_atoi_short(ft_strndup(&str[length(str) - i - 1], tmp));
		if (search(unit, checknum, array) != 0)
			return (1);
		i -= tmp;
	}
	ft_putstr("\n");
	return (0);
}

int_least32_t	ft_unit(int unit, t_entry *array[10])
{
	t_entry	*ptr;
	int		tmp;
	int		flag;

	ptr = array[2];
	tmp = 0;
	flag = 0;
	while (--unit >= 0)
		tmp += 3;
	while (ptr)
	{
		if (ptr->key == tmp)
		{
			if (flag != 0)
				return (1);
			ft_putstr(ptr->value);
			flag++;
		}
		ptr = ptr->next;
	}
	if (flag == 0)
		return (1);
	return (0);
}
