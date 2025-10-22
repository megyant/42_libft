/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbotelho <mbotelho@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/20 11:30:05 by mbotelho          #+#    #+#             */
/*   Updated: 2025/10/22 15:39:37 by mbotelho         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *s, int c, size_t n)
{
	unsigned char	*ptr;

	ptr = (unsigned char *) s;
	while (n > 0)
	{
		ptr[n - 1] = (unsigned char) c;
		n--;
	}
	return (s);
}

/*int	main(void)
{
    char buffer[10];
    int i = 0;

    ft_memset(buffer, 'a', 10);
    while (i < 10)
    {
        printf("%d ", buffer[i]);
        i++;
    }
    printf("\n");
}*/