/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ryabuki <ryabuki@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/12 14:33:27 by ryabuki           #+#    #+#             */
/*   Updated: 2024/03/13 19:25:47 by ryabuki          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	len(char *dest, char *src, unsigned int *d, unsigned int *s)
{
	*d = 0;
	*s = 0;
	while (*dest != '\0')
	{
		(*d)++;
		dest++;
	}
	while (*src != '\0')
	{
		(*s)++;
		src++;
	}
}

char	*ft_strncat(char *dest, char *src, unsigned int nb)
{
	unsigned int	d;
	unsigned int	s;
	unsigned int	nbc;

	len(dest, src, &d, &s);
	dest += d;
	nbc = nb;
	while (*src != '\0' && nb > 0)
	{
		*dest = *src;
		src++;
		dest++;
		nb--;
	}
	*dest = '\0';
	if (s < nbc)
	{
		return (dest - s - d);
	}
	else
	{
		return (dest - nbc - d);
	}
}

// #include <stdio.h>
// #include <string.h>

// int main(void)
// {
// 	char    dest[100] = "appleapple";
// 	char    src[100] = "lemonlemon";
//     char    dest_cat[100] = "appleapple";
// 	char    src_cat[100] = "lemonlemon";
// 	unsigned int nb = 8;

// 	printf("%s, %s\n", dest, src);
// 	char *result = ft_strncat(dest, src, nb);
//     char *result_cat = strncat(dest_cat, src_cat, nb);
// 	printf("%s, %s\n", dest, src);
// 	printf("%s\n", result);
//     printf("%s\n", result_cat);
// 	return (0);
// }
