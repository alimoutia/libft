
#include "libft.h"

static size_t count_words(char const *s, char c)
{
	size_t i;
	size_t nb;
	size_t j;

	i = 0;
	while (s[i])
	{
		if (s[i] != c)
		{
			nb++;
			while (s[i] != c && s[i])
				i++;
		}
		i++;
	}
	return (nb);
}

static void free_all(char **str, size_t k)
{
	while (k > 0)
	{
		k--;
		free(str[k]);
	}
	free(str);
}

static size_t fd_nextsep(const char *s, size_t i, char c)
{
	while (s[i] && s[i] != c)
		i++;
		return (i);
}

char **ft_split(char const *s, char c)
{
	char **str;
	size_t len;

	len = count_words(s, c);
	str = malloc(sizeof(char *) * (len +1));
	if (!str)
		return (NULL);
	str[len] = NULL;
}