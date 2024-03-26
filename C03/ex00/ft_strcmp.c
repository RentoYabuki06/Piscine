/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ryabuki <ryabuki@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/12 11:51:28 by ryabuki           #+#    #+#             */
/*   Updated: 2024/03/13 11:16:14 by ryabuki          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strcmp(char *s1, char *s2)
{
	while (*s1 != '\0' || *s2 != '\0')
	{
		if (*s1 != *s2)
		{
			return (*s1 - *s2);
		}
		s1++;
		s2++;
	}
	return (0);
}

// #include <stdio.h>
// #include <string.h>

// int	main(void)
// {
// 	char s1[] = "abc";
// 	char s2[] = "abc";
// 	char s3[] = "abcdexf";
// 	printf("%d\n", ft_strcmp(s1, s2));
//     printf("%d\n", ft_strcmp(s2, s3));
//     printf("%d\n", strcmp(s2, s3));
// 	return (0);
// }