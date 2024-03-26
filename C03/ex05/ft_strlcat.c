/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ryabuki <ryabuki@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/12 14:33:27 by ryabuki           #+#    #+#             */
/*   Updated: 2024/03/20 14:50:00 by ryabuki          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_length(char *dest)
{
	int	dest_len;

	dest_len = 0;
	while (dest[dest_len] != '\0')
		dest_len++;
	return (dest_len);
}

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int	dest_len;
	unsigned int	src_len;
	unsigned int	i;

	dest_len = ft_length(dest);
	src_len = ft_length(src);
	i = 0;
	if (size == 0)
		return (src_len);
	else if (dest_len < size)
	{
		while (src[i] != '\0' && dest_len < size - 1)
		{
			dest[dest_len] = src[i];
			i++;
			dest_len++;
		}
		dest[dest_len] = '\0';
		return (dest_len + src_len - i);
	}
	else
		return (src_len + size);
}

// #include <stdio.h>
// #include <string.h>

// int main(void)
// {
// 	char    dest[100] = "appleapple";
// 	char    src[100] = "lemonlemon";
//     char    dest_cat[100] = "appleapple";
// 	char    src_cat[100] = "lemonlemon";
// 	unsigned int nb = 20;
// 	printf("made by me : [%u]\n", ft_strlcat(dest, src, nb));
// 	printf("made by me : [%s]\n", dest);
// 	printf("srtlcat function : [%lu]\n",strlcat(dest_cat, src_cat, nb));
// 	printf("srtlcat function : [%s]\n", dest_cat);
//     ////////////////////////////////////
//     // char    dest[100] = "hi";
// 	// char    src[100] = "hi";
//     // char    dest_cat[100] = "hi";
// 	// char    src_cat[100] = "hi";
//     // unsigned int nb = 1;
// 	// printf("made by me : [%u]\n", ft_strlcat(dest, src, nb));
// 	// printf("made by me : [%s]\n", dest);
// 	// printf("srtlcat function : [%lu]\n",strlcat(dest_cat, src_cat, nb));
// 	// printf("srtlcat function : [%s]\n", dest_cat);
// 	return (0);
// }