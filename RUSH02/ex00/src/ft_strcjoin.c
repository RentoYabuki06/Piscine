/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcjoin.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yonuma <yonuma@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/23 17:52:38 by yuotsubo          #+#    #+#             */
/*   Updated: 2024/03/24 21:22:44 by yonuma           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/rush-02.h"

char	*ft_strcjoin(char **str, char c)
{
	size_t	i;
	size_t	len;
	char	*res;

	len = ft_strlen(*str);
	res = (char *)malloc((len + 2) * sizeof(char));
	if (!res)
		return (NULL);
	i = 0;
	while (*str && (*str)[i])
	{
		res[i] = (*str)[i];
		i++;
	}
	res[i++] = c;
	res[i] = '\0';
	return (res);
}
