/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_swap.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ryabuki <ryabuki@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/09 18:06:32 by yabukirento       #+#    #+#             */
/*   Updated: 2024/03/13 08:59:15 by ryabuki          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_swap(int *a, int *b)
{
	int	temp;

	temp = 0;
	temp = *a;
	*a = *b;
	*b = temp;
}

// #include <stdio.h>

// int main(void)
// {
//     int a;
//     int b;

//     a = 4;
//     b = 7;
//     printf("%d%d\n", a, b);
//     ft_swap(&a,&b);
//     printf("%d%d\n", a, b);
//     return (0);
// }
