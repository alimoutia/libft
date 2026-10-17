
#include "libft.h"

static size_t count_words(char const *s, char c)
{
	int i;
	size_t nb;

	i = 0;
	nb = 0;
	while (s[i])
	{

		if (s[i] == c && s[i])
			i++;
		else
		{
			nb++;
			while (s[i] != c && s[i])
				i++;
		}
	}
	return (nb);
}

static void free_all(char **str, int k)
{
	while (k > 0)
	{
		k--;
		free(str[k]);
	}
	free(str);
}

static char **fill_str(char **str, char const *s, char c)
{
	int i;
	int start;
	int j;

	i = 0;
	j = 0;
	while (s[i])
	{
		while (s[i] == c)
			i++;
		if (s[i] == '\0')
			break ;
		start = i;
		while (s[i] && s[i] != c)
			i++;
		str[j] = ft_substr(s, start, i - start);
		if (!str[j])
		{
			free_all(str, j);
			return (NULL);
		}
		j++;
	}
	return (str);
}

char **ft_split(char const *s, char c)
{
	char **str;
	size_t len;

	if (!s)
		return (NULL);
	len = count_words(s, c);
	str = malloc(sizeof(char *) * (len +1));
	if (!str)
		return (NULL);
	str[len] = NULL;
	str = fill_str(str, s, c);
	if (!str)
		return (NULL);
	return (str);
}
