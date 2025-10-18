#include <stdio.h>

void *ft_memset(void *s, int c, size_t n);
void ft_bzero(void *s, size_t n);

int	main(void)
{
    char buffer[10];
    int i = 0;

    ft_memset(buffer, 'a', 10);
    printf("Before ft_bzero:\n");
    while (i < 10)
    {
        printf("%d ", buffer[i]);
        i++;
    }
    printf("\n");

    ft_bzero(buffer, 10);
    i = 0;
    while (i < 10)
    {
        printf("%d ", buffer[i]);
        i++;
    }
    printf("\n");
}
