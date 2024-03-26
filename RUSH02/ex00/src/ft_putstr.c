/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yonuma <yonuma@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/23 15:38:26 by yuotsubo          #+#    #+#             */
/*   Updated: 2024/03/24 20:20:44 by yonuma           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/rush-02.h"

void	ft_putstr(char *str)
{
	size_t	i;

	i = 0;
	while (str[i])
		write(STDERR_FILENO, &str[i++], sizeof(char));
	write(1, " ", 1);
}
