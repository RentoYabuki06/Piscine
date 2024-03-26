/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_second_digits.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yonuma <yonuma@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/24 18:25:16 by ryabuki           #+#    #+#             */
/*   Updated: 2024/03/24 20:35:53 by yonuma           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/rush-02.h"

int	ft_second_digits(int num, t_entry *array[10])
{
	int		flag;
	t_entry	*ptr;

	flag = 0;
	ptr = array[1];
	if (num < 10)
		return (0);
	if (!(num >= 10 && num < 20))
		num = (num / 10) * 10;
	while (ptr)
	{
		if (ptr->key == num)
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
