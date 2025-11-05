/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: megyant <megyant@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/27 08:41:26 by mbotelho          #+#    #+#             */
/*   Updated: 2025/11/05 11:07:56 by megyant          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_striteri(char *s, void (*f)(unsigned int, char *))
{
	unsigned int	i;

	if (!s || !f)
		return ;
	i = -1;
	while (s[++i])
		(*f)(i, &s[i]);
}

/*void alternate_case(unsigned int i, char *c)
{
	if (*c >= 'A' && *c <= 'Z')
        *c += 32;
 	if (i % 2 != 0 && *c >= 'a' && *c <= 'z')
        *c -= 32;
}

int main(void)
{
	char str[] = "Hello, world";
	ft_striteri(str, alternate_case);
	printf("%s\n", str);
	return (0);
}*/