/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_div_mod.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ryabuki <ryabuki@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/10 15:24:26 by yabukirento       #+#    #+#             */
/*   Updated: 2024/03/13 09:12:32 by ryabuki          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_ultimate_div_mod(int *a, int *b)
{
	int	temp;

	temp = *a;
	*a = temp / *b;
	*b = temp % *b;
}

// #include <stdio.h>

// int main()
// {
//     int a;
//     int b;
//     a = 7;
//     b = 3;
//     printf("%d%d\n", a, b);
//     ft_ultimate_div_mod(&a, &b);
//     printf("%d%d\n", a, b);
//     return (0);
// }
