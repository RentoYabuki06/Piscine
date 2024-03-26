/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ryabuki <ryabuki@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/10 16:41:44 by yabukirento       #+#    #+#             */
/*   Updated: 2024/03/20 15:10:32 by ryabuki          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strncpy(char *dest, char *src, unsigned int n)
{
	unsigned int	i;
	char			*temp;

	i = 0;
	temp = dest;
	while (i < n && *src != '\0')
	{
		*dest = *src;
		dest++;
		src++;
		i++;
	}
	while (i < n)
	{
		*dest = '\0';
		dest ++;
		i++;
	}
	return (temp);
}

// #include <stdio.h>

// int main()
// {
// 	unsigned int n = 4;
// 	char    dest[16] = "Hello World!";
// 	char    src[16] = "Vello Xorld!";
// 	printf("%s%s\n", dest, src);

// 	char	*test = ft_strncpy(dest, src, n);
// 	printf("%s\n", test);
// 	return (0);
// }
