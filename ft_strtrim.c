#include "libft.h"

static int	is_equal(const char *set, char c);

char	*ft_strtrim(char const *s1, char const *set)
{
	char	*strf;
	size_t	start;
	size_t	end;
	size_t	i;

	start = 0;
	if (!s1 && !set)
		return (NULL);
	end = ft_strlen(s1) - 1;
	while (s1[start] != '\0' && is_equal(set, s1[start]))
		start++;
	if (start > end)
		return (ft_strdup(""));
	while (is_equal(set, s1[end]) && end >= start)
		end--;
	strf = malloc(((end - start + 1) + 1) * sizeof(char));
	if (!strf)
		return (NULL);
	i = 0;
	while (start <= end && s1[start])
	{
		strf[i++] = s1[start++];
	}
	strf[i] = '\0';
	return (strf);
}

static int	is_equal(const char *set, char c)
{
	size_t	i;

	i = 0;
	while (set[i])
	{
		if (set[i] == c)
			return (1);
		i++;
	}
	return (0);
}

/*int main(void)
{
	printf("%s\n", ft_strtrim("ababHelloab", "ab"));
	return (0);
}*/