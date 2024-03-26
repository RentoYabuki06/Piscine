/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ryabuki <ryabuki@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/10 16:41:44 by yabukirento       #+#    #+#             */
/*   Updated: 2024/03/20 15:10:20 by ryabuki          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strcpy(char *dest, char *src)
{
	char	*temp;

	temp = dest;
	while (*src != '\0')
	{
		*dest = *src;
		dest ++;
		src ++;
	}
	*dest = '\0';
	return (temp);
}

// #include <stdio.h>

// int main()
// {
// 	char    dest[16] = "Hello World!";
// 	char    src[16] = "Vello Xorld!";
// 	printf("%s%s\n", dest, src);

// 	char	*test = ft_strcpy(dest, src);
//     printf("%c\n", *ft_strcpy(dest, src));
// 	printf("%s\n", test);
// 	// while(i < 16)
// 	// {
// 	// 	printf("%s\n", test);
// 	// 	test ++;
// 	// 	i++;
// 	// }
// 	return (0);
// }
