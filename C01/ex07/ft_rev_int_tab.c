/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ryabuki <ryabuki@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/10 15:56:29 by yabukirento       #+#    #+#             */
/*   Updated: 2024/03/13 09:22:25 by ryabuki          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_rev_int_tab(int *tab, int size)
{
	int	half;
	int	i;
	int	temp;

	half = size / 2;
	i = 0;
	while (i < size / 2)
	{
		temp = tab[i];
		tab[i] = tab[size - 1 - i];
		tab[size - 1 - i] = temp;
		i++;
	}
}

// #include <stdio.h>
// int main()
// {
//     int i =0;
//     int size = 5;
//     int tab[5] = {123, 234, 345, 456, 567};
//     while (i < size)
//     {
//         printf("%d\n", tab[i]);
//         i++;
//     }
//     ft_rev_int_tab(tab, size);
//     i =0;
//     while (i < size)
//     {
//         printf("%d\n", tab[i]);
//         i++;
//     }
//     return(0);
// }
