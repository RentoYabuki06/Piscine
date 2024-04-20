#include "libft.h"

t_list	*ft_lstlast(t_list *lst)
{
	int count;
	
	count = ft_lstsize(lst);
	while (count > 1)
	{
		lst = lst->next;
		count--;
	}
	return lst;
}