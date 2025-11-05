/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: megyant <megyant@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/22 12:24:19 by mbotelho          #+#    #+#             */
/*   Updated: 2025/11/05 11:16:22 by megyant          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t nmemb, size_t size)
{
	size_t			i;
	unsigned char	*ptr;

	if (nmemb == 0 || size == 0)
		return (malloc(1));
	if (nmemb > SIZE_MAX / size)
	{
		return (NULL);
	}
	ptr = (unsigned char *)malloc(nmemb * size);
	i = -1;
	if (!ptr)
		return (NULL);
	while (++i < (nmemb * size))
	{
		ptr[i] = 0;
	}
	return ((void *)ptr);
}

/*int main(void)
{
	int a = 5;
	char *ptro = (char *)calloc(a, sizeof(char));
	char *ptr42 = (char *)ft_calloc(a, sizeof(char));
	int i = -1;
	int j = -1;
	
	if (ptro == NULL)
	{
		printf("Failed");
		return (0);
	}
	printf("Original:\n");
	while (++i < a)
		printf("%d", ptro[i]);
	printf("\nMine:\n");
	while (++j < a)
		printf("%d", ptr42[i]);
	free(ptro);
	free(ptr42);
	return (0);
}*/