#include <stdio.h>
size_t	ft_strlen(char *str);  // declare the function

int main(void)
{
    const char *str = "Hello, 42!";
    printf("Length: %zu\n", ft_strlen(str));
    return 0;
}

//  cc -Wall -Wextra -Werror test.c libft.a -o test