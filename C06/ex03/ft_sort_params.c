/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_params.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ryabuki <ryabuki@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/15 11:43:17 by yabukirento       #+#    #+#             */
/*   Updated: 2024/03/22 11:50:42 by ryabuki          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

static int	ft_strcmp(char *s1, char *s2)
{
	while (*s1 != '\0' || *s2 != '\0')
	{
		if (*s1 != *s2)
		{
			return (*s1 - *s2);
		}
		s1++;
		s2++;
	}
	return (0);
}

static void	ft_sort(int argc, char *argv[])
{
	int		i;
	int		j;
	char	*temp;

	j = 1;
	while (j < argc)
	{
		i = 1;
		while (i < argc - 1)
		{
			if (ft_strcmp(argv[i], argv[i + 1]) > 0)
			{
				temp = argv[i + 1];
				argv[i + 1] = argv[i];
				argv[i] = temp;
			}
			i++;
		}
		j++;
	}
}

int	main(int argc, char *argv[])
{
	int		i;
	int		arg_len;
	char	*argname;

	if (argc <= 1)
		return (0);
	ft_sort(argc, argv);
	i = 1;
	while (i < argc)
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
		i++;
	}
	return (0);
}
