/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ryabuki <ryabuki@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/12 16:07:30 by ryabuki           #+#    #+#             */
/*   Updated: 2024/03/20 09:32:14 by ryabuki          ###   ########.fr       */
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

char	*ft_str02(char *str, char *to_find)
{
	int	i;
	int	j;

	i = 0;
	while (str[i] != '\0' && i < ft_length(str) - ft_length(to_find) + 1)
	{
		j = 0;
		if (str[i] == to_find[j] && str[i] != '\0' && to_find[j] != '\0')
		{
			while (str[i] == to_find[j] && str[i] != '\0' && to_find[j] != '\0')
			{
				i++;
				j++;
			}
			if (j == ft_length(to_find))
			{
				return (&str[i - j]);
			}
		}
		i++;
	}
	return ((void *)0);
}

char	*ft_strstr(char *str, char *to_find)
{
	if (to_find[0] == '\0')
	{
		return (str);
	}
	return (ft_str02(str, to_find));
}

// #include        <stdio.h>
// #include        <string.h>
// int main(void)
// {
// 	char    s1[] = "abcdefghijklmn";
// 	char    s2[] = "defgh";
// 	char    s3[] = "xyz";
// 	char    s4[] = "abcdefghijklmnopqr";
// 	char    s5[] = "";
// 	char    *sp;
// 	printf("<<<<< s1 s1 >>>>>\n");
// 	sp = strstr(s1,s1);
// 	printf("expected output : %s\n",sp);
// 	sp = ft_strstr(s1,s1);
// 	printf("actual output   : %s\n\n",sp);
// 	printf("<<<<< s1 s3 >>>>>\n");
// 	sp = strstr(s1,s3);
// 	printf("expected output : %s\n",sp);
// 	sp = ft_strstr(s1,s3);
// 	printf("actual output   : %s\n\n",sp);
// 	printf("<<<<< s1 s4 >>>>>\n");
// 	sp = strstr(s1,s4);
// 	printf("expected output : %s\n",sp);
// 	sp = ft_strstr(s1,s4);
// 	printf("actual output   : %s\n\n",sp);
// 	printf("<<<<< s1 s5 >>>>>\n");
// 	sp = strstr(s1,s5);
// 	printf("expected output : %s\n",sp);
// 	sp = ft_strstr(s1,s5);
// 	printf("actual output   : %s\n\n",sp);
// 	printf("<<<<< s4 s2 >>>>>\n");
//     sp = strstr(s4,s2);
// 	printf("expected output : %s\n",sp);
// 	sp = ft_strstr(s4,s2);
// 	printf("actual output   : %s\n\n",sp);
// 	return 0;
// }