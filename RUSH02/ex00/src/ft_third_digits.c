/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_third_digits.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yonuma <yonuma@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/24 18:21:32 by ryabuki           #+#    #+#             */
/*   Updated: 2024/03/24 21:41:32 by yonuma           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/rush-02.h"

int	ft_third_digits(int num, t_entry	*array[10])
{
	t_entry	*ptr_unit;
	int		flag;

	flag = 0;
	if (ft_first_digits(num, array) != 0)
		return (1);
	ptr_unit = array[2];
	flag = 0;
	while (ptr_unit)
	{
		if (ptr_unit->key == 2)
		{
			if (flag != 0)
				return (1);
			ft_putstr (ptr_unit->value);
			flag++;
		}
		ptr_unit = ptr_unit->next;
	}
	if (flag == 0)
		return (1);
	return (0);
}
