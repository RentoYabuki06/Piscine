/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_params.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ryabuki <ryabuki@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/15 11:43:17 by yabukirento       #+#    #+#             */
/*   Updated: 2024/03/16 08:33:02 by ryabuki          ###   ########.fr       */
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
	while (argc - 1 - i > 0)
	{
		argname = argv[argc - 1 - i];
		arg_len = 0;
		while (*argname)
		{
			arg_len++;
			argname++;
		}
		write(1, argv[argc - 1 - i], arg_len);
		write(1, "\n", 1);
		i++;
	}
	return (0);
}
