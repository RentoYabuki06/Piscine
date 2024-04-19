/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yabukirento <yabukirento@student.42.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/19 14:53:55 by yabukirento       #+#    #+#             */
/*   Updated: 2024/04/19 15:52:43 by yabukirento      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stddef.h>

void *ft_memchr(const void *s, int c, size_t n)
{
	size_t i;
	const unsigned char *us;

	us = (const unsigned char *)s;
	i = 0;
	while (i < n)
	{
		if (us[i] == (unsigned char)c)
		{
			return (void *)(s + i);
		}
		i++;
	}
	return ((void *)0);
}