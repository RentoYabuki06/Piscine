/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yonuma <yonuma@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/23 02:56:16 by yuotsubo          #+#    #+#             */
/*   Updated: 2024/03/24 21:30:58 by yonuma           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/rush-02.h"

int	main(int argc, char *argv[])
{
	t_entry	**heads;

	heads = init(argc, argv);
	if (!heads)
		return (EXIT_FAILURE);
	if (argc == 2)
	{
		if (info(argv[1], heads) != 0)
		{
			ft_putstr("Dict Error\n");
			return (1);
		}
	}
	else
	{
		if (info(argv[2], heads) != 0)
		{
			ft_putstr("Dict Error\n");
			return (1);
		}
	}
	free(heads);
	return (EXIT_SUCCESS);
}
