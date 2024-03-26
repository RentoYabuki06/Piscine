/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_reverse_alphabet.c                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ryabuki <ryabuki@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/06 15:53:22 by ryabuki           #+#    #+#             */
/*   Updated: 2024/03/07 12:34:14 by ryabuki          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print_reverse_alphabet(void)
{
	char	str;

	str = 'z';
	while (str >= 'a')
	{
		write(1, &str, sizeof(str));
		str--;
	}
}

//int	main(void)
//{
//	ft_print_reverse_alphabet ();
//	return (0);
//}
