/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_first_digits.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yonuma <yonuma@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/24 18:24:02 by ryabuki           #+#    #+#             */
/*   Updated: 2024/03/24 20:20:01 by yonuma           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/rush-02.h"

int	ft_first_digits(int num, t_entry *array[10])
{
	t_entry	*ptr;
	int		flag;

	flag = 0;
	ptr = array[0];
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
