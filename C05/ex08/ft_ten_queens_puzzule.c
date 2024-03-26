/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ten_queens_puzzule.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ryabuki <ryabuki@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/25 19:17:50 by ryabuki           #+#    #+#             */
/*   Updated: 2024/03/26 12:42:37 by ryabuki          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putnbr(int queen[10])
{
	int		i;
	char	tmp;

	i = 0;
	while (i < 10)
	{
		tmp = queen[i] + '0';
		write(1, &tmp, 1);
		i++;
	}
	write(1, "\n", 1);
}

void	ft_change_board(int board[10][10], int x, int y, int i)
{
	int	j;

	j = 0;
	while (j < 10)
	{
		board[x][j] += i;
		board[j][y] += i;
		if (x + j < 10 && y + j < 10)
			board[x + j][y + j] += i;
		if (x + j < 10 && y - j >= 0)
			board[x + j][y - j] += i;
		if (x - j >= 0 && y + j < 10)
			board[x - j][y + j] += i;
		if (x - j >= 0 && y - j >= 0)
			board[x - j][y - j] += i;
		j++;
	}
}

void	ft_set(int queen[10], int board[10][10], int x, int *count)
{
	int	y;

	if (x == 10)
	{
		ft_putnbr(queen);
		*count += 1;
		return ;
	}
	y = 0;
	while (y < 10)
	{
		if (board[x][y] == 0)
		{
			queen[x] = y;
			ft_change_board(board, x, y, 1);
			ft_set(queen, board, x + 1, count);
			ft_change_board(board, x, y, -1);
		}
		y++;
	}
}

int	ft_ten_queens_puzzle(void)
{
	int	i;
	int	j;
	int	queen[10];
	int	board[10][10];
	int	count;

	i = 0;
	count = 0;
	while (i < 10)
	{
		queen[i] = 0;
		j = 0;
		while (j < 10)
		{
			board[i][j] = 0;
			j++;
		}
		i++;
	}
	ft_set(queen, board, 0, &count);
	return (count);
}

// #include <stdio.h>
// int	main(void)
// {
// 	printf("[%d]", ft_ten_queens_puzzle());
// 	return 0;
// }
