/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yonuma <yonuma@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/18 02:20:44 by yuotsubo          #+#    #+#             */
/*   Updated: 2024/03/24 20:57:28 by yonuma           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/rush-02.h"

static size_t	get_all_len(int size, char **strs, char *sep)
{
	int		i;
	size_t	res;

	res = 0;
	i = 0;
	while (i < size)
	{
		res += ft_strlen(strs[i]);
		i++;
		if (i != size)
			res += ft_strlen(sep);
	}
	return (res);
}

static char	*make_res(int size, char **strs, char *sep, char *res)
{
	int		i;
	size_t	j;
	size_t	k;
	size_t	l;

	k = 0;
	i = 0;
	while (i < size)
	{
		j = 0;
		while (strs[i][j])
			res[k++] = strs[i][j++];
		l = 0;
		if (i < size - 1)
		{
			while (sep[l])
				res[k++] = sep[l++];
		}
		i++;
	}
	res[k] = '\0';
	return (res);
}

char	*ft_strjoin(int size, char **strs, char *sep)
{
	char	*res;
	size_t	res_len;

	if (!size)
	{
		res = (char *)malloc(sizeof(char));
		res[0] = '\0';
		return (res);
	}
	res_len = get_all_len(size, strs, sep);
	res = (char *)malloc((res_len + 1) * sizeof(char));
	if (!res)
		return (NULL);
	res = make_res(size, strs, sep, res);
	return (res);
}
