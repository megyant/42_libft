
#ifndef LIBFT_H
# define LIBFT_H

# include <stddef.h>

// chars
int	ft_isalnum(char c);
int	ft_isalpha(char c);
int	ft_isascii(char c);
int	ft_isdigit(char c);
int	ft_isprint(char c);

// strings
size_t	ft_strlen(char *str);

// Memmory management
void	*ft_memset(void *s, int c, size_t n);
#endif