/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yabukirento <yabukirento@student.42.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/19 14:53:55 by yabukirento       #+#    #+#             */
/*   Updated: 2024/04/28 14:44:21 by yabukirento      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <stddef.h>

static size_t	ft_count(char const *s, char c)
{
	size_t	i;
	size_t	count;

	i = 0;
	count = 0;
	while (s[i] != '\0')
	{
		if (s[i] != c && (i == 0 || s[i - 1] == c))
		{
			count++;
		}
		i++;
	}
	return (count);
}

static char	*ft_strndup(char const *src, size_t n)
{
	size_t	i;
	char	*dest;

	dest = (char *)malloc((n + 1) * sizeof(char));
	if (dest == NULL)
		return (NULL);
	i = 0;
	while (i < n)
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}

static void	ft_allfree(char **ans, size_t j)
{
	size_t	i;

	i = 0;
	while (i < j)
	{
		free(ans[i]);
		i++;
	}
	free(ans);
}

static void	fill_split(char **ans, char const *s, char c, size_t i)
{
	size_t	j;
	size_t	len;

	j = 0;
	while (s[i])
	{
		while (s[i] == c)
			i++;
		if (!s[i])
			break ;
		len = 0;
		while (s[i + len] && s[i + len] != c)
			len++;
		ans[j] = ft_strndup(s + i, len);
		if (!ans[j])
		{
			ft_allfree(ans, j);
			return ;
		}
		i += len;
		j++;
	}
	ans[j] = NULL;
}

char	**ft_split(char const *s, char c)
{
	char	**ans;

	if (!s)
		return (NULL);
	ans = (char **)malloc(sizeof(char *) * (ft_count(s, c) + 1));
	if (!ans || !s)
		return (NULL);
	fill_split(ans, s, c, 0);
	return (ans);
}
