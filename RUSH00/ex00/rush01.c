/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush01.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hito <hito@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/09 16:47:27 by hito              #+#    #+#             */
/*   Updated: 2024/03/10 23:10:38 by hito             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

#define SIDE '*'
#define CORNER_RIGHT_TOP '\\'
#define CORNER_RIGHT_BOTTOM '/'
#define CORNER_LEFT_TOP '/'
#define CORNER_LEFT_BOTTOM '\\'

void	ft_putchar(char c);

void	error(void);

void	top_row(int a)
{
	int	i;

	i = 0;
	ft_putchar(CORNER_LEFT_TOP);
	while (i < a - 2)
	{
		ft_putchar(SIDE);
		i++;
	}
	if (a != 1)
	{
		ft_putchar(CORNER_RIGHT_TOP);
	}
}

void	middle(int a)
{
	int	i;

	i = 0;
	ft_putchar(SIDE);
	while (i < a - 2)
	{
		ft_putchar(' ');
		i++;
	}
	if (a != 1)
	{
		ft_putchar(SIDE);
	}
}

void	bottom_row(int a)
{
	int	i;

	i = 0;
	ft_putchar(CORNER_LEFT_BOTTOM);
	while (i < a - 2)
	{
		ft_putchar(SIDE);
		i++;
	}
	if (a != 1)
	{
		ft_putchar(CORNER_RIGHT_BOTTOM);
		ft_putchar('\n');
	}
}

int	newline(int a, int b)
{
	int	i;

	i = 0;
	top_row(a);
	ft_putchar('\n');
	while (i < b - 2)
	{
		middle(a);
		i++;
		ft_putchar('\n');
	}
	bottom_row(a);
	return (0);
}

int	rush(int a, int b)
{
	int	i;

	i = 0;
	if (b <= 0 || a <= 0)
	{
		error();
		return (0);
	}
	else if (b == 1)
	{
		top_row(a);
		ft_putchar('\n');
		return (0);
	}
	else if (b > 1)
	{
		newline(a, b);
		return (0);
	}
	return (0);
}
