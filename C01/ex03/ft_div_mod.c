/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_div_mod.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ryabuki <ryabuki@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/09 19:05:51 by yabukirento       #+#    #+#             */
/*   Updated: 2024/03/13 09:10:56 by ryabuki          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_div_mod(int a, int b, int *div, int *mod)
{
	*div = a / b;
	*mod = a % b;
}

// #include <stdio.h>

// int main()
// {
//     int a;
//     int b;
//     int div;
//     int mod;
//     a = 7;
//     b = 2;
//     div = 0;
//     mod = 0;
//     printf("%d,%d,%d,%d,\n", a , b , div, mod);
//     ft_div_mod(a, b, &div, &mod);
//     printf("%d,%d,%d,%d,\n", a , b , div, mod);
// }
