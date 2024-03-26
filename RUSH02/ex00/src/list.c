/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   list.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yonuma <yonuma@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/23 17:51:21 by yonuma            #+#    #+#             */
/*   Updated: 2024/03/24 21:38:37 by yonuma           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/rush-02.h"
#include <stdlib.h>

t_entry	*lst_new(int n, char *content)
{
	t_entry	*new;

	new = (t_entry *)malloc(sizeof(t_entry));
	if (!new)
		return (NULL);
	new->key = n;
	new->value = content;
	new->next = NULL;
	return (new);
}

void	lst_add_back(t_entry **lst, t_entry *new)
{
	t_entry	*tmp;

	if (!*lst)
	{
		*lst = new;
		return ;
	}
	tmp = *lst;
	while (tmp->next)
		tmp = tmp->next;
	tmp->next = new;
}

void	lst_clear(t_entry **lst)
{
	t_entry	*tmp;

	while (*lst)
	{
		tmp = *lst;
		*lst = (*lst)->next;
		free(tmp);
	}
}
