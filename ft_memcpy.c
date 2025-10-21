/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbotelho <mbotelho@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/20 11:29:54 by mbotelho          #+#    #+#             */
/*   Updated: 2025/10/21 09:42:37 by mbotelho         ###   ########.fr       */
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
