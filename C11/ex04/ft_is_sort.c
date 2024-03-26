/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_sort.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ryabuki <ryabuki@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/25 11:03:08 by ryabuki           #+#    #+#             */
/*   Updated: 2024/03/25 18:16:49 by ryabuki          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_is_sort(int *tab, int length, int (*f)(int, int))
{
	int	i;
	int	flag;
	int	flag_rev;

	i = 0;
	flag = 0;
	flag_rev = 0;
	while (i < length - 1)
	{
		if (f(tab[i], tab[i + 1]) > 0)
			flag += 1;
		if (f(tab[i], tab[i + 1]) < 0)
			flag_rev += 1;
		i++;
	}
	if (flag == 0 || flag_rev == 0)
		return (1);
	else
		return (0);
}

// int	check_sort(int str, int next)
// {
// 	return (str - next);
// }

// #include <stdio.h>
// int main() {
//     int tab[] = {-1, 0, -2, 3, 4, 5};
//     // int tab[] = {1, 0, 2, -3, -4, -5};

//     printf("[%d]\n",ft_is_sort(tab, 5, &check_sort));
//     return 0;
// }
