/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbotelho <mbotelho@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/27 14:18:34 by mbotelho          #+#    #+#             */
/*   Updated: 2025/10/27 15:00:44 by mbotelho         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstnew(void *content)
{
	t_list	*arg;

	arg = malloc(sizeof(t_list));
	if (!arg)
		return (NULL);
	arg->content = content;
	arg->next = NULL;
	return (arg);
}

/*int main(void)
{
	
}*/