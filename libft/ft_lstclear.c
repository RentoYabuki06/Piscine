#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void*))
{
	t_list *plst;
	t_list *tmp;

	if (!lst || !del || !*lst)
		return ;
	plst = *lst;
	while (plst)
	{
		tmp = plst->next;
		del(plst->content);
		free(plst);
		plst = tmp;
	}
	*lst = NULL;
}