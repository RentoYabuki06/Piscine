/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yabukirento <yabukirento@student.42.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/19 14:53:55 by yabukirento       #+#    #+#             */
/*   Updated: 2024/04/19 19:11:26 by yabukirento      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stddef.h>
#include <stdlib.h>

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	size_t	s_len;
	char	*substr;

	if (!s)
		return (NULL);

	s_len = ft_strlen(s);

	if (start >= s_len)
	{
		// startが文字列の長さ以上の場合、空の文字列またはNULLを返す
		return (ft_strdup(""));
	}

	// 部分文字列の長さを制限
	len = (len > s_len - start) ? s_len - start : len;

	// 部分文字列を格納するメモリを割り当て
	substr = (char *)malloc(sizeof(char) * (len + 1));
	if (!substr)
		return (NULL);

	// 部分文字列をコピー
	ft_strlcpy(substr, s + start, len + 1);

	return (substr);
}


