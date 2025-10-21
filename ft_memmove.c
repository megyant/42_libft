/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbotelho <mbotelho@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/20 11:30:00 by mbotelho          #+#    #+#             */
/*   Updated: 2025/10/21 09:54:16 by mbotelho         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	unsigned char		*ptrd;
	const unsigned char	*ptrs;
	size_t				i;

	if (!dest && !src)
		return (NULL);
	ptrd = (unsigned char *) dest;
	ptrs = (const unsigned char *) src;
	i = -1;
	if (ptrd > ptrs)
	{
		while (n > 0)
		{
			ptrd[n - 1] = ptrs[n - 1];
			n--;
		}
	}
	else
	{
		while (i++ < n)
		{
			ptrd[i] = ptrs[i];
		}
	}
	return (dest);
}

/*int	main(void)
{ //ft_memset && ft_memmove
    char src[10];
    char dest[10];
    int i = 0;

    ft_memset(src, 'a', 10);
    printf("Source:\n");
    while (i < 10)
    {
        printf("%d ", src[i++]);
    }
    printf("\n");

    ft_memmove(dest, src, 10);
    i = 0;
    printf("Dest:\n");
    while (i < 10)
    {
        printf("%d ", dest[i]);
        i++;
    }
    printf("\n");
}*/