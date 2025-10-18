

#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	unsigned char *ptrd;
	const unsigned char *ptrs;

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