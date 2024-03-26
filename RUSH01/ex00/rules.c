/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rules.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tuchikaw <tuchikaw@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/17 20:48:48 by tuchikaw          #+#    #+#             */
/*   Updated: 2024/03/17 20:53:16 by tuchikaw         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#define N 4

int	ft_check_top(int block[N][N], int rules[(N *N)], int pos)
{
	int	i;
	int	max;
	int	count;

	i = 0;
	max = 0;
	count = 0;
	if (pos / N == N - 1)
	{
		while (i < N)
		{
			if (block[i][pos % N] > max)
			{
				max = block[i][pos % N];
				count++;
			}
			i++;
		}
		if (rules[pos % N] != count)
			return (1);
	}
	return (0);
}

int	ft_check_bottom(int block[N][N], int rules[N *N], int pos)
{
	int	i;
	int	max;
	int	count;

	i = N - 1;
	max = 0;
	count = 0;
	if (pos / N == N - 1)
	{
		while (i >= 0)
		{
			if (block[i][pos % N] > max)
			{
				max = block[i][pos % N];
				count++;
			}
			i--;
		}
		if (rules[N + pos % N] != count)
			return (1);
	}
	return (0);
}

int	ft_check_left(int block[N][N], int rules[N *N], int pos)
{
	int	i;
	int	max;
	int	count;

	i = 0;
	max = 0;
	count = 0;
	if (pos % N == N - 1)
	{
		while (i < N)
		{
			if (block[pos / N][i] > max)
			{
				max = block[pos / N][i];
				count++;
			}
			i++;
		}
		if (rules[N * 2 + pos / N] != count)
			return (1);
	}
	return (0);
}

int	ft_check_right(int block[N][N], int rules[N *N], int pos)
{
	int	i;
	int	max_size;
	int	visible_towers;

	i = N;
	max_size = 0;
	visible_towers = 0;
	if (pos % N == N - 1)
	{
		while (--i >= 0)
		{
			if (block[pos / N][i] > max_size)
			{
				max_size = block[pos / N][i];
				visible_towers++;
			}
		}
		if (rules[N * 3 + pos / N] != visible_towers)
			return (1);
	}
	return (0);
}

int	ft_check_rules(int block[N][N], int rules[N *N], int pos)
{
	if (ft_check_left(block, rules, pos) == 1)
		return (1);
	if (ft_check_right(block, rules, pos) == 1)
		return (1);
	if (ft_check_top(block, rules, pos) == 1)
		return (1);
	if (ft_check_bottom(block, rules, pos) == 1)
		return (1);
	return (0);
}
