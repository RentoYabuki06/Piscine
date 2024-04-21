/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstlast.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ryabuki <ryabuki@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/21 17:52:19 by ryabuki           #+#    #+#             */
/*   Updated: 2024/04/21 17:52:31 by ryabuki          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstlast(t_list *lst)
{
	int	count;

	count = ft_lstsize(lst);
	while (count > 1)
	{
		lst = lst->next;
		count--;
	}
	return (lst);
}
