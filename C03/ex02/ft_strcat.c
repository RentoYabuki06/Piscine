/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ryabuki <ryabuki@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/12 14:33:27 by ryabuki           #+#    #+#             */
/*   Updated: 2024/03/13 19:28:14 by ryabuki          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_length(char *dest, char *src, int *dest_len, int *src_len)
{
	*dest_len = 0;
	*src_len = 0;
	while (*dest != '\0')
	{
		(*dest_len)++;
		dest++;
	}
	while (*src != '\0')
	{
		(*src_len)++;
		src++;
	}
}

char	*ft_strcat(char *dest, char *src)
{
	int	dest_len;
	int	src_len;

	ft_length(dest, src, &dest_len, &src_len);
	dest += dest_len;
	while (*src != '\0')
		*dest++ = *src++;
	*dest = '\0';
	return (dest - src_len - dest_len);
}

// #include <stdio.h>

// int main(void)
// {
//     char    dest[100] = "aiueo";
//     char    src[100] = "123456789";

//     printf("before : [%s], [%s]\n", dest, src);
//     char *result = ft_strcat(dest, src);
//     printf("after ; [%s], [%s]\n", dest, src);
//     printf("[%s]\n", result);
//     return (0);
// }
