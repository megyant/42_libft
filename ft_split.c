#include "libft.h"

static int word_count(char const *s, char c);

char	**ft_split(char const *s, char c)
{
	char **strf;

	strf = calloc(word_count(s, c) + 1, sizeof(char *));
	if (!strf)
		return (NULL);
	
}

static int	word_count(char const *s, char c)
{
	size_t	in_word;
	size_t	count;
	size_t	i;

	in_word = 0;
	count = 0;
	i = 0;
	while (s[i])
	{
		if (s[i] != c && in_word = 0)
		{
			in_word = 1;
			count++;
		}
		else if (s[i] == c)
		{
			in_word = 0;
		}
		i++;
	}
	return(count);
}

static char	*allocate_word