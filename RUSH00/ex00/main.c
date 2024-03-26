/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yuakiyam <yuakiyam@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/09 16:47:24 by hito              #+#    #+#             */
/*   Updated: 2024/03/10 22:26:32 by yuakiyam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int		rush(int a, int b);

void	top_row(int b);

void	middle(int b);

void	bottom_row(int a);

void	ft_putchar(char c);

int	main(void)
{
	rush(3, 3);
	return (0);
}
