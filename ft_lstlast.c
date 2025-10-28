#include "libft.h"

t_list	*ft_lstlast(t_list *lst)
{
	t_list	*last;

	if (!lst)
		return (NULL);
	last = lst;
	while (last->next)
		last = last->next;
	return (last);
}

/*int main(void)
{
	t_list *head = ft_lstnew("Hello");
	t_list *n1 = ft_lstnew("world");

	head->next = n1;
	printf("%s\n", (char *)ft_lstlast(head)->content);
	return (0);
}*/