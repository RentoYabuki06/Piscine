/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ryabuki <ryabuki@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/16 12:50:50 by yabukirento       #+#    #+#             */
/*   Updated: 2024/03/18 07:38:09 by ryabuki          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	*ft_range(int min, int max)
{
	int	i;
	int	*ans;

	if (min >= max)
		return (NULL);
	ans = (int *)malloc((max - min) * sizeof(int));
	i = 0;
	while (i < max - min)
	{
		ans[i] = min + i;
		i++;
	}
	return (ans);
}

// #include <stdio.h>

// int main(int argc, char *argv[])
// {
// 	(void) argc;
//     int min = atoi(argv[1]);
//     int max = atoi(argv[2]);
//     int *tmp = ft_range(min, max);
// 	printf("Min : [%d]\nMax : [%d]\nResult :", min, max);
//     for (int i = 0; i < max - min; i++) {
//         printf("[%d] ", tmp[i]);
//     }
//     printf("\n");
// }
