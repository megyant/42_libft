#include <stdio.h>
#include "libft.h"

int	main(void)
{
    char src[10];
    char dest[10];
    int i = 0;

    ft_memset(src, 'a', 10);
    printf("Source:\n");
    while (i < 10)
    {
        printf("%d ", src[i]);
        i++;
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
}
