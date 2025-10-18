#include <stdio.h>

void	*ft_memset(void *s, int c, size_t n);
void ft_bzero(void *s, size_t n);

int	main(void)
{
	char	buffer[10];
	int		i;

	ft_memset(buffer, 'A', 10);
	printf("Before bzero:\n");
	for (i = 0; i < 10; i++)
		printf("%d ", buffer[i]);
	printf("\n");

	ft_bzero(buffer, 10);

	printf("After bzero:\n");
	for (i = 0; i < 10; i++)
		printf("%d ", buffer[i]);
	printf("\n");
}
