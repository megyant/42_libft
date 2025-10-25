#include "libft.h"

void	ft_putstr_fd(char *s, int fd)
{
	size_t	i;

	i = -1;
	while (s[++i])
	{
		write(fd, &s[i], 1);
	}
}

/*int	main(void)
{
	ft_putstr_fd("Hello, world", 1);
	ft_putstr_fd("\n", 1);
	return (0);
}*/