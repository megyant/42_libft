/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbotelho <mbotelho@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/29 11:41:29 by mbotelho          #+#    #+#             */
/*   Updated: 2025/10/29 12:54:13 by mbotelho         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*nlist;
	t_list	*node;
	int		size;

	if (!lst || !del || !f)
		return (NULL);
	nlist = NULL;
	node = NULL;
	size = ft_lstsize(lst);
	while (lst)
	{
		node = ft_lstnew(f(lst->content));
		if (!node)
		{
			ft_lstclear(&nlist, del);
			return (NULL);
		}
		ft_lstadd_back(&nlist, node);
		lst = lst->next;
	}
	return (nlist);
}

/*int main(void)
{
	t_list *head = 
}*/