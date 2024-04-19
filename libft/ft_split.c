/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yabukirento <yabukirento@student.42.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/19 14:53:55 by yabukirento       #+#    #+#             */
/*   Updated: 2024/04/19 19:03:41 by yabukirento      ###   ########.fr       */
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
	size_t	flag;

	i = 0;
	count = 0;
	flag = -1;
	while (s[i])
	{
		if (s[i] == c && flag == i - 1)
		{
			flag = i;
			count++;
		}	
		i++;
	}
	if (s[i - 1] != c)
		count ++;
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
			break;
		len = 0;
		while (s[i + len] && s[i + len] != c)
			len++;
		ans[j] = ft_strndup(s + i, len);
		i += len;
		j++;
	}
	ans[j] = NULL;
}

char	**ft_split(char const *s, char c)
{
	char	**ans;

	ans = (char **)malloc(sizeof(char *) * (ft_count(s, c) + 1));
	if (!ans || !s)
		return (NULL);
	fill_split(ans, s, c, 0);
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
