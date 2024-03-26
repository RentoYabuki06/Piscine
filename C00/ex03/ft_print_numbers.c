/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_numbers.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ryabuki <ryabuki@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/06 15:53:22 by ryabuki           #+#    #+#             */
/*   Updated: 2024/03/07 12:34:24 by ryabuki          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print_numbers(void)
{
	char	str;

	str = '0';
	while (str <= '9')
	{
		write(1, &str, sizeof(str));
		str++;
	}
}

//int	main(void)
//{
//	ft_print_numbers ();
//	return (0);
//}
