/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ryabuki <ryabuki@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/15 12:58:49 by yabukirento       #+#    #+#             */
/*   Updated: 2024/03/18 07:35:56 by ryabuki          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

char	*ft_strdup(char *src)
{
	int		i;
	int		len;
	char	*dest;
	char	*src_copy;

	len = 0;
	src_copy = src;
	while (*src)
	{
		len++;
		src++;
	}
	dest = (char *)malloc((len + 1) * sizeof(char));
	if (dest == NULL)
		return (NULL);
	i = 0;
	while (i < len)
	{
		dest[i] = src_copy[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}

// #include <stdio.h>

// int main(int argc, char *argv[])
// {
// 	(void) argc;
// 	printf("Before : [%s]\nAfter : [%s]\n", argv[1], ft_strdup(argv[1]));
// 	return (0);
// }
