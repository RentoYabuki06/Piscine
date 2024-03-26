/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ryabuki <ryabuki@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/12 09:28:31 by ryabuki           #+#    #+#             */
/*   Updated: 2024/03/21 17:35:13 by ryabuki          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

unsigned int	ft_length(char *dest)
{
	unsigned int	dest_len;

	dest_len = 0;
	while (dest[dest_len] != '\0')
		dest_len++;
	return (dest_len);
}

unsigned int	ft_strlcpy(char *dest, char *src, unsigned int size)
{
	unsigned int	i;
	unsigned int	src_len;
	unsigned int	dest_len;

	i = 0;
	src_len = ft_length(src);
	dest_len = ft_length(dest);
	if (size == 0)
		return (src_len);
	while (i < size - 1 && *src != '\0')
	{
		*dest = *src;
		dest ++;
		src ++;
		i++;
	}
	*dest = '\0';
	return (src_len);
}

#include <stdio.h>
#include <string.h>
int	main(void)
{
	char	dest[100] = "012345";
	char	src[100] = "abcde";
	char	ideal_dest[100] = "012345";
	char	ideal_src[100] = "abcde";
	unsigned int	size = 0;
    printf("dest : [%s]\nsrc : [%s]\n", dest, src);
	printf("<<<<< made by me >>>>>\n");
	printf("Return Value :[%d]\n", ft_strlcpy(dest, src, size));
    printf("dest : [%s]\nsrc : [%s]\n", dest, src);
    printf("<<<<< ideal >>>>>\n");
	printf("Return Value :[%lu]\n", strlcpy(ideal_dest, ideal_src, size));
    printf("ideal_dest : [%s]\nideal_src : [%s]\n", ideal_dest, ideal_src);
    return(0);
}
