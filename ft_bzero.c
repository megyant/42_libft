/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbotelho <mbotelho@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/20 11:29:29 by mbotelho          #+#    #+#             */
/*   Updated: 2025/10/21 09:34:57 by mbotelho         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_bzero(void *s, size_t n)
{
	unsigned char	*ptr;

	ptr = (unsigned char *) s;
	while (n > 0)
	{
		ptr[n - 1] = 0;
		n--;
	}
}

/*int	main(void)
{ // ft_memset && ft_bzero
    char buffer[10];
    int i = 0;

    ft_memset(buffer, 'a', 10);
    printf("Before ft_bzero:\n");
    while (i < 10)
    {
        printf("%d ", buffer[i]);
        i++;
    }
    printf("\n");

    ft_bzero(buffer, 10);
    i = 0;
    while (i < 10)
    {
        printf("%d ", buffer[i]);
        i++;
    }
    printf("\n");
}*/