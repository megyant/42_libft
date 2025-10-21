/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbotelho <mbotelho@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/21 10:53:46 by mbotelho          #+#    #+#             */
/*   Updated: 2025/10/21 15:17:59 by mbotelho         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <string.h>
#include <stdio.h>

void	*ft_memchr(const void *s, int c, size_t n)
{
	unsigned char	*ptr;
	unsigned char	b;
	size_t			i;

	ptr = (unsigned char *) s;
	b = (unsigned char)c;
	i = 0;
	while (i < n)
	{
		if (ptr[i] == b)
			return ((void *)&ptr[i]);
		i++;
	}
	return (NULL);
}

/*int main(void)
{
	int c = 'b';
	char buffer[] = {'a', 'b', 'c', 'd'};
    printf("%s ", (char *)ft_memchr(buffer, c, 4));
    printf("\n");
	printf("%s ", (char *)memchr(buffer, c, 4));
	printf("\n");
}*/