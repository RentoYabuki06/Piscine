/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_param.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ryabuki <ryabuki@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/15 11:43:17 by yabukirento       #+#    #+#             */
/*   Updated: 2024/03/16 08:32:31 by ryabuki          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	main(int argc, char *argv[])
{
	int		i;
	int		arg_len;
	char	*argname;

	i = 0;
	if (argc <= 1)
		return (0);
	while (++i < argc)
	{
		argname = argv[i];
		arg_len = 0;
		while (*argname)
		{
			arg_len++;
			argname++;
		}
		write(1, argv[i], arg_len);
		write(1, "\n", 1);
	}
	return (0);
}
