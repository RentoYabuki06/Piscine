/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ryabuki <ryabuki@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/16 13:28:25 by yabukirento       #+#    #+#             */
/*   Updated: 2024/03/20 14:54:32 by ryabuki          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_strlen(char *str)
{
	int		i;
	char	*str_origin;

	i = 0;
	str_origin = str;
	while (str[i] != '\0')
	{
		i++;
	}
	str = str_origin;
	return (i);
}

int	ft_total_len(int size, char **strs, char*sep)
{
	int	i;
	int	j;
	int	total_len;

	i = 0;
	total_len = 0;
	while (i < size)
	{
		j = 0;
		while (strs[i][j] != '\0')
		{
			total_len += ft_strlen(&strs[i][j]);
			j++;
		}
		i++;
	}
	total_len += ft_strlen(sep) * (size - 1);
	return (total_len);
}

char	*ft_strjoin(int size, char **strs, char*sep)
{
	int		i;
	int		j;
	int		k;
	char	*tmp;

	i = 0;
	k = 0;
	if (size == 0)
	{
		tmp = (char *)malloc(sizeof(char));
		return (tmp);
	}
	tmp = (char *)malloc(sizeof(char) * (ft_total_len(size, strs, sep) + 1));
	while (i < size)
	{
		j = 0;
		while (strs[i][j] != '\0')
			tmp[k++] = strs[i][j++];
		j = 0;
		while (sep[j] != '\0' && i < size - 1)
			tmp[k++] = sep[j++];
		i++;
	}
	tmp[k] = '\0';
	return (tmp);
}

// #include <stdio.h>
// int main(int argc, char *argv[])
// {
//     (void)argc;
//     (void)argv;
//     char *strs[] = {"hello", "world"};
//     int size = 2; 
//     char    sep[] = "0000";
// 	printf("Return Value : [%s]\n", ft_strjoin(size, strs, sep));
// 	return(0);
// }