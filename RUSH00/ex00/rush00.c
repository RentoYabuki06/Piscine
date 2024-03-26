/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush00.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yuakiyam <yuakiyam@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/09 16:47:27 by hito              #+#    #+#             */
/*   Updated: 2024/03/10 22:45:42 by yuakiyam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

#define LINE '-'
#define ROW '|'
#define CORNER_RIGHT_TOP 'o'
#define CORNER_RIGHT_BOTTOM 'o'
#define CORNER_LEFT_TOP 'o'
#define CORNER_LEFT_BOTTOM 'o'

void	ft_putchar(char c);

void	error(void);

void	top_row(int a)
{
	int	i;

	i = 0;
	ft_putchar(CORNER_LEFT_TOP);
	while (i < a - 2)
	{
		ft_putchar(LINE);
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
	ft_putchar(ROW);
	while (i < a - 2)
	{
		ft_putchar(' ');
		i++;
	}
	if (a != 1)
	{
		ft_putchar(ROW);
	}
}

void	bottom_row(int a)
{
	int	i;

	i = 0;
	ft_putchar(CORNER_LEFT_TOP);
	while (i < a - 2)
	{
		ft_putchar(LINE);
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
