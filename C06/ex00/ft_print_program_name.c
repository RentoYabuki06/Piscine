/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_program_name.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ryabuki <ryabuki@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/15 11:43:17 by yabukirento       #+#    #+#             */
/*   Updated: 2024/03/16 08:32:01 by ryabuki          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	main(int argc, char *argv[])
{
	int		filename_len;
	char	*filename;

	(void) argc;
	filename = argv[0];
	filename_len = 0;
	while (*filename)
	{
		filename_len++;
		filename++;
	}
	write(1, argv[0], filename_len);
	write(1, "\n", 1);
	return (0);
}
