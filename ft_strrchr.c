/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbotelho <mbotelho@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/21 09:58:51 by mbotelho          #+#    #+#             */
/*   Updated: 2025/10/21 10:43:25 by mbotelho         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
/*#include <stdio.h>
#include <string.h>*/

char	*ft_strrchr(const char *s, int c)
{
	size_t	i;
	char	*a;

	i = 0;
	a = NULL;
	while (s[i])
	{
		if (s[i] == c)
			a = (char *) &s[i];
		i++;
	}
	if (s[i] == c)
		a = (char *) &s[i];
	return (a);
}

/*int main(void)
{
	const char *str = "small";
	int c = 'l';
	printf("%s   %s", ft_strrchr(str, c), strrchr(str, c));
	return (0);
}*/