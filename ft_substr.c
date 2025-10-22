/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbotelho <mbotelho@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/22 16:48:22 by mbotelho          #+#    #+#             */
/*   Updated: 2025/10/22 17:15:54 by mbotelho         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	size_t	slen;
	size_t	i;
	char	*sub;

	slen = ft_strlen(s);
	if (!s)
		return (NULL);
	if (start > slen)
		return (ft_strdup(""));
	sub = malloc((slen + 1) * sizeof(char));
	if (len > ft_strlen(s + start))
		len = ft_strlen(s + start);
	i = -1;
	while (++i < len)
		sub[i] = s[start + i];
	return (sub);
}

/*int main(void)*/