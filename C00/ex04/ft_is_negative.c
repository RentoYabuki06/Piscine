/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_negative.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ryabuki <ryabuki@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/06 15:52:59 by ryabuki           #+#    #+#             */
/*   Updated: 2024/03/07 12:34:39 by ryabuki          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_is_negative(int c)
{
	char	positive;
	char	negative;

	positive = 'P';
	negative = 'N';
	if (c < 0)
	{
		write(1, &negative, 1);
	}
	else
	{
		write(1, &positive, 1);
	}
}

//int	main(void)
//{
//	ft_is_negative(-1);
//	return (0);
//}
