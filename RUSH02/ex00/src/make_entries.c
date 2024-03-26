/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   make_entries.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yonuma <yonuma@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/23 18:36:24 by yuotsubo          #+#    #+#             */
/*   Updated: 2024/03/24 20:29:14 by yonuma           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/rush-02.h"

char	*make_value(char *str)
{
	size_t	i;

	i = 0;
	while (str[i] && str[i] != ':')
		i++;
	if (str[i] != ':')
		return (NULL);
	i++;
	while (ft_isspace(str[i]))
		i++;
	if (!str[i])
		return (NULL);
	return (&str[i]);
}

static int	count_digit(char *str)
{
	size_t	i;

	i = 0;
	while (ft_is_num(str[i]))
		i++;
	return ((int)i);
}

t_entry	**make_entries(char **lines)
{
	t_entry	**heads;
	size_t	i;
	int		digit;
	char	*value;

	heads = (t_entry **)malloc(3 * sizeof(t_entry *));
	if (!heads)
		return (NULL);
	i = 0;
	while (lines[i])
	{
		digit = count_digit(lines[i]);
		value = make_value(lines[i]);
		if (!value)
			return (NULL);
		if (digit == 1)
			lst_add_back(&heads[0], lst_new(lines[i][0] - '0', value));
		else if (digit == 2)
			lst_add_back(&heads[1], lst_new(ft_atoi(lines[i]), value));
		else
			lst_add_back(&heads[2], lst_new(digit - 1, value));
		i++;
	}
	return (heads);
}
