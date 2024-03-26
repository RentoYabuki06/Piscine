/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ryabuki <ryabuki@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/12 11:51:28 by ryabuki           #+#    #+#             */
/*   Updated: 2024/03/13 11:20:31 by ryabuki          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strncmp(char *s1, char *s2, unsigned int n)
{
	unsigned int	i;

	i = 0;
	while ((*s1 != '\0' || *s2 != '\0') && i < n)
	{
		if (*s1 != *s2)
		{
			return (*s1 - *s2);
		}
		s1++;
		s2++;
		i++;
	}
	return (0);
}

// #include <stdio.h>
// #include <string.h>

// int	main(void)
// {
//     unsigned int n = 3;
// 	char s1[] = "abc";
// 	char s2[] = "abc";
// 	char s3[] = "abcdexf";
//     printf("%d\n", ft_strncmp(s1, s2, n));
//     printf("%d\n", strncmp(s1, s2, n));
// 	printf("%d\n", ft_strncmp(s3, s2, n));
//     printf("%d\n", strncmp(s3, s2, n));
//     printf("%d\n", ft_strncmp(s1, s3, n));
//     printf("%d\n", strncmp(s1, s3, n));
// 	return (0);
// }