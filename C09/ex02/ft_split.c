/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ryabuki <ryabuki@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/21 08:07:29 by yabukirento       #+#    #+#             */
/*   Updated: 2024/03/22 08:41:07 by ryabuki          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <unistd.h>

char	*ft_strdup(char *src, int n)
{
	int		i;
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

int	ft_next_len(char *str, char *charset)
{
	int	i;
	int	j;

	i = 0;
	while (str[i])
	{
		j = 0;
		while (charset[j])
		{
			if (str[i] == charset[j])
			{
				return (i);
			}
			j++;
		}
		i++;
	}
	return (i);
}

int	ft_sep_len(char *str, char *charset)
{
	int	i;
	int	j;

	i = 0;
	while (str[i])
	{
		j = 0;
		while (charset[j])
		{
			if (str[i] == charset[j])
			{
				i++;
				j = -1;
			}
			j++;
		}
		return (i);
	}
	return (i);
}

int	ft_count(char *str, char *charset)
{
	unsigned int	i;
	unsigned int	j;
	unsigned int	flag;
	int				count;

	i = 0;
	flag = -1;
	count = 0;
	while (str[i])
	{
		j = 0;
		while (charset[j])
		{
			if (str[i] == charset[j])
			{
				if (flag != i - 1)
					count++;
				flag = i;
			}
			j++;
		}
		i++;
	}
	return (count);
}

char	**ft_split(char *str, char *charset)
{
	int		i;
	int		str_len;
	char	**tmp;
	char	*origin;

	tmp = (char **)malloc(sizeof(char *) * (ft_count(str, charset) + 2));
	if (!tmp || !str)
		return (NULL);
	str += ft_sep_len(str, charset);
	origin = str;
	i = 0;
	while (*str)
	{
		str_len = ft_next_len(str, charset);
		tmp[i] = ft_strdup(origin, str_len);
		str += ft_next_len(str, charset) + ft_sep_len(str + str_len, charset);
		origin = str;
		i++;
	}
	tmp[i] = 0;
	return (tmp);
}
