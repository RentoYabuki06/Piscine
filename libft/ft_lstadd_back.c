#include "libft.h"

void	ft_lstadd_back(t_list **lst, t_list *new)
{
	t_list *last;

	if (lst && new)
	{
		last = ft_lstlast(*lst);
		if (last)
			last->next = new;
		else
			*lst = new;
	}
}