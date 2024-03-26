/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yuotsubo <yuotsubo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/18 00:19:34 by yuotsubo          #+#    #+#             */
/*   Updated: 2024/03/23 22:59:32 by yuotsubo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/rush-02.h"

char	*ft_strdup(char *src)
{
	size_t	i;
	size_t	len;
	char	*res;

	len = ft_strlen(src);
	res = (char *)malloc((len + 1) * sizeof(char));
	if (!res)
		return (NULL);
	i = 0;
	while (src[i])
	{
		res[i] = src[i];
		i++;
	}
	res[i] = '\0';
	return (res);
}

// int	main(void)
// {
// 	char src[] = "Hello 42!!";
// 	char *res;

// 	res = ft_strdup(src);
// 	printf("src: %s\nres: %s\n", src, res);
// 	return (0);
// }
