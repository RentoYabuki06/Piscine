/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putendl_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yabukirento <yabukirento@student.42.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/19 14:53:55 by yabukirento       #+#    #+#             */
/*   Updated: 2024/04/19 14:55:46 by yabukirento      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <unistd.h>

static void ft_putstr_fd(char *s, int fd)
{
    while (*s)
    {
        write(fd, s, 1);
        s++;
    }
}

void ft_putendl_fd(char *s, int fd)
{
    ft_putstr_fd(s, fd);
    write(fd, "\n", 1);
}