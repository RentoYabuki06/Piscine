/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_non_printable.c                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ryabuki <ryabuki@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/20 14:28:38 by ryabuki           #+#    #+#             */
/*   Updated: 2024/03/21 17:37:59 by ryabuki          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int	ft_str_is_printable(char str)
{
	if (!(str >= ' ' && str <= '~'))
	{
		return (0);
	}
	return (1);
}

void	ft_putstr_non_printable(unsigned char *str)
{
	int	i;

	i = 0;
	if (str[i] == '\0')
		return ;
	while (str[i])
	{
		if (ft_str_is_printable(str[i]) == 1)
		{
			ft_putchar(str[i]);
		}
		else
		{
			ft_putchar('\\');
			ft_putchar("0123456789abcdef"[str[i] / 16]);
			ft_putchar("0123456789abcdef"[str[i] % 16]);
		}
		i++;
	}
}

int	main()
{
	// unsigned char	c = 130;
	unsigned char	str[] = "Coucou\rtu v\tas bien ?";
	ft_putstr_non_printable(str);
	write(1,"\n",1);
	return 0;
}