/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tuchikaw <tuchikaw@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/17 20:48:45 by tuchikaw          #+#    #+#             */
/*   Updated: 2024/03/17 21:58:00 by tuchikaw         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#define N 4

int		ft_check_rules(int block[N][N], int rules[N *N], int pos);
int		has_duplicate(int block[N][N], int pos, int new_value);
void	ft_putstr(char *str);
void	ft_putchar(char c);
int		check(int ac, char **av);
int		*get_numbers(char *str);

int	ft_set_block(int block[N][N], int rules[N *N], int pos)
{
	int	size;

	if (pos == (N * N))
	{
		return (1);
	}
	size = 0;
	while (++size <= N)
	{
		if (has_duplicate(block, pos, size) == 0)
		{
			block[pos / N][pos % N] = size;
			if (ft_check_rules(block, rules, pos) == 0)
			{
				if (ft_set_block(block, rules, pos + 1) == 1)
					return (1);
			}
			else
				block[pos / N][pos % N] = 0;
		}
	}
	return (0);
}

void	ft_print(int block[N][N])
{
	int		i;
	int		j;
	char	c;

	i = 0;
	while (i < N)
	{
		j = 0;
		while (j < N)
		{
			c = block[i][j] + '0';
			ft_putchar(c);
			ft_putchar(' ');
			j++;
		}
		ft_putchar('\n');
		i++;
	}
}

int	main(int ac, char **av)
{
	int	*entry;
	int	i;
	int	j;
	int	tab[N][N];

	i = -1;
	while (++i < N)
	{
		j = -1;
		while (++j < N)
			tab[i][j] = 0;
	}
	if (check(ac, av) == 1)
	{
		ft_putstr("Error\n");
		return (0);
	}
	entry = get_numbers(av[1]);
	if (ft_set_block(tab, entry, 0) == 1)
	{
		ft_print(tab);
		return (0);
	}
	ft_putstr("Error\n");
	return (1);
}
