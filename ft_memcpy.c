/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: megyant <megyant@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/20 11:29:54 by mbotelho          #+#    #+#             */
/*   Updated: 2025/10/29 19:13:11 by megyant          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	unsigned char		*ptrd;
	const unsigned char	*ptrs;

	if (!dest && !src)
		return (NULL);
	ptrd = (unsigned char *) dest;
	ptrs = (const unsigned char *) src;
	while (n > 0)
	{
		ptrd[n - 1] = ptrs[n - 1];
		n--;
	}
	return (dest);
}

/*int main(void)
{
	printf("========Testing memcpy========\n\n");
	char src[10] = "abcdefghi";
    char buffer1[10];
    int i;
	if (ft_memcpy(buffer1, src, 10) == ft_memcpy(buffer1, src, 10))
	{
		 printf("SUCCESS    Testing: dest, 'abcdefghi', 10\n");
        while (i < 10)
		{
			printf("%c ", buffer1[i]);
			i++;
		}
        printf("\n");
    }
    else
	{
        printf("Oh no :(    Testing: 10 bytes\n");
	}
	
	printf("\n");
	
	// Test 2: Copy 0 bytes
	i = 0;
	if (ft_memcpy(buffer1, src, 0) == ft_memcpy(buffer1, src, 0))
	{
		 printf("SUCCESS    Testing: dest, 'abcdefghi', 0\n");
    }
    else
	{
        printf("Oh no :(    Testing: 10 bytes\n");
	}
}*/