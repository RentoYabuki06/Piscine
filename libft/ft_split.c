/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yabukirento <yabukirento@student.42.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/19 14:53:55 by yabukirento       #+#    #+#             */
/*   Updated: 2024/04/19 14:56:02 by yabukirento      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <stddef.h>

static size_t	ft_strlen(const char *str)
{
	size_t	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

static char	*ft_strdup(char const *src, size_t n)
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

static char	*ft_strchr(const char *s, int c)
{
	int i;

	i = 0;
	while (s[i])
	{
		if (s[i] == c)
		{
			return (char *)(s + i);
		}
		i++;
	}
	if (s[i] == c)
		return (char *)(s + i);
	return ((void *)0);
}

static size_t	ft_count(char const *s, char c)
{
	size_t	i;
	size_t	count;

	i = 0;
	count = 0;
	while (s[i])
	{
		if (s[i] == c)
			count++;
		i++;
	}
	return (count);
}

char	**ft_split(char const *s, char c)
{
	size_t		i;
	size_t		j;
	size_t		len;
	char	**ans;

	ans = (char **)malloc(sizeof(char *) * (ft_count(s, c) + 2));
	if (!ans || !s)
		return (NULL);
	i = 0;
	j = 0;
	while (s[i])
	{
		char *found = ft_strchr(s + i, c);
		if (found == NULL)
			len = ft_strlen(s + i);
		else
			len = found - (s + i);
		ans[j] = ft_strdup(s + i, len);
		i += len;
		j++;
		if (s[i])
			i++;
	}
	ans[i] = NULL;
	return (ans);
}

// int main()
// {
//     char *str = "apple,orange,banana";
//     char **result = ft_split(str, ',');
//     int i = 0;
//     while (result[i] != NULL)
//     {
//         printf("%s\n", result[i]);
//         i++;
//     }
//     return 0;
// }
