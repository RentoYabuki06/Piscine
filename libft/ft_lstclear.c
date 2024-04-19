#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void*))
{
	if (lst && del)
	{
		while (*lst)
		{
			ft_lstdelone(*lst, del);
			*lst = (*lst)->next;
		}
	}
}