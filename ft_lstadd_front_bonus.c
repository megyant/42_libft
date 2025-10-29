/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_front.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbotelho <mbotelho@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/27 14:59:48 by mbotelho          #+#    #+#             */
/*   Updated: 2025/10/29 08:09:31 by mbotelho         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_front(t_list **lst, t_list *new)
{
	new->next = *lst;
	*lst = new;
}

/*int main(void)
{
	t_list	*head = ft_lstnew("Hello");
	t_list	*new = ft_lstnew("world");
	t_list **lst = &head;
	ft_lstadd_front(lst, new);
	t_list	*tmp = *lst;
	while (tmp != NULL)
	{
		printf("%s\n", (char *)tmp->content);
		tmp = tmp->next;
	}
	return (0);
}*/