/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ryabuki <ryabuki@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/16 13:07:03 by yabukirento       #+#    #+#             */
/*   Updated: 2024/03/19 14:55:55 by ryabuki          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_ultimate_range(int **range, int min, int max)
{
	int	i;

	if (min >= max)
	{
		*range = NULL;
		return (0);
	}
	*range = (int *)malloc((max - min) * sizeof(int));
	i = 0;
	if (!(*range))
		return (-1);
	while (i < max - min)
	{
		(*range)[i] = min + i;
		i++;
	}
	return (max - min);
}

// #include <stdio.h>

// int main(int argc, char *argv[])
// {
//     if (argc != 3) {
//         printf("Usage: %s min max\n", argv[0]);
//         return 1;
//     }
//     int min = atoi(argv[1]);
//     int max = atoi(argv[2]);
//     int *tmp;
// 	printf("Min : [%d]\nMax : [%d]\n", min, max);
// 	printf("Return Value : [%d]\n ", ft_ultimate_range(&tmp, min, max));
//     for (int i = 0; i < max - min; i++) {
//         printf("rangeに格納された配列 :[%d]", tmp[i]);
//     }
//     printf("\n");
//     free(tmp);
//     return(0);
// }
