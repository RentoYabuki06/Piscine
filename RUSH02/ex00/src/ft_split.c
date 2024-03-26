/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yuotsubo <yuotsubo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/19 22:46:16 by yuotsubo          #+#    #+#             */
/*   Updated: 2024/03/23 18:26:34 by yuotsubo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/rush-02.h"

static int	is_in_charset(char c, char *charset)
{
	size_t	i;

	i = 0;
	while (charset[i])
	{
		if (c == charset[i])
			return (1);
		i++;
	}
	return (0);
}

static int	count_strs(char *str, char *charset)
{
	size_t	i;
	int		count;
	int		flag;

	count = 0;
	flag = 0;
	i = 0;
	while (str[i])
	{
		if (flag && is_in_charset(str[i], charset))
		{
			count++;
			flag = 0;
		}
		else if (!is_in_charset(str[i], charset))
			flag = 1;
		i++;
	}
	if (flag == 1)
		count++;
	return (count);
}

static int	ft_to_next_charset(char *str, char *charset)
{
	size_t	i;
	size_t	j;

	i = 0;
	while (str[i])
	{
		j = 0;
		while (charset[j])
		{
			if (str[i] == charset[j])
				return (i);
			j++;
		}
		i++;
	}
	return (i);
}

char	*ft_strndup(char *src, int n)
{
	char	*res;
	size_t	len;
	size_t	i;

	len = 0;
	while (src[len])
		len++;
	res = (char *)malloc((len + 1) * sizeof(char));
	if (!res)
		return (NULL);
	i = 0;
	while (src[i] && i < (size_t)n)
	{
		res[i] = src[i];
		i++;
	}
	res[i] = '\0';
	return (res);
}

char	**ft_split(char *str, char *charset)
{
	char	**res;
	int		size;
	int		n;
	size_t	i;

	size = count_strs(str, charset);
	res = (char **)malloc((size + 1) * sizeof(char *));
	if (!res)
		return (NULL);
	n = 0;
	i = 0;
	while (n < size)
	{
		while (is_in_charset(str[i], charset))
			i++;
		res[n] = ft_strndup(&str[i], ft_to_next_charset(&str[i], charset));
		i += ft_to_next_charset(&str[i], charset);
		if (!res[n])
			return (NULL);
		n++;
	}
	res[n] = NULL;
	return (res);
}

// int	main(void)
// {
// 	char	**res;
// 	char	str[] = "12345678901234567890";
// 	char	charset[] = "340";
// 	int		i = 0;

// 	res = ft_split(str, charset);
// 	while (res[i])
// 		printf("%s\n", res[i++]);
// 	return (0);
// }