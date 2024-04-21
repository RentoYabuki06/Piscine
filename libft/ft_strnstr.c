/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yabukirento <yabukirento@student.42.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/19 14:53:55 by yabukirento       #+#    #+#             */
/*   Updated: 2024/04/21 19:40:07 by yabukirento      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stddef.h>

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t	i;
	size_t	len_needle;

	if (*haystack == '\0' && *needle == '\0')
		return ((char *)haystack);
	if (len < 1)
		return (0);
	len_needle = ft_strlen(needle);
	i = 0;
	while (i < len && len - i >= len_needle && *haystack != '\0') 
	{
		if (ft_strncmp((haystack + i), needle, len_needle) == 0)
		{
			return ((char *)(haystack + i));
		}
		i++;
	}
	return ((void *)0);
}
