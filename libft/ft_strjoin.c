/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yabukirento <yabukirento@student.42.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/19 14:53:55 by yabukirento       #+#    #+#             */
/*   Updated: 2024/04/19 15:25:29 by yabukirento      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stddef.h>

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*ans;
	size_t	len_s1;
	size_t	len_s2;
	
	len_s1 = ft_strlen(s1);
	len_s2 = ft_strlen(s2);
	ans = (char *)malloc(sizeof(char) * (len_s1 + len_s2 + 1));
	if (!ans)
		return (NULL);
	ft_strlcpy(ans, s1, len_s1 + 1);
	ft_strlcpy(ans + len_s1, s2, len_s2 + 1);
	return (ans);
}
