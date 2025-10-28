#include "libft.h"

void	ft_lstadd_back(t_list **lst, t_list *new)
{
	t_list	*last;

	last = ft_lstlast(*lst);
	if (!last)
		*lst = new;
	last->next = new;
}

/*int main(void)
{
	t_list	*head = ft_lstnew("Hello");
	t_list	*n1 = ft_lstnew("world");
	t_list **lst = &head;
	ft_lstadd_back(lst, n1);
	t_list	*tmp = *lst;
	while (tmp != NULL)
	{
		printf("%s\n", (char *)tmp->content);
		tmp = tmp->next;
	}
	return (0);
}*/