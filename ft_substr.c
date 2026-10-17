
#include "libft.h"

char *ft_substr(char const *s, unsigned int start, size_t len)
{
	size_t	slen;
	char	*subs;
	size_t	i;

	if (s == NULL)
		return (NULL);
	slen = ft_strlen(s);
	if ((size_t)start >= slen || len == 0)
	{
		subs = malloc(1);
		if (!subs)
			return (NULL);
		subs[0] = '\0';
		return (subs);
	}
	i = 0;
	subs = malloc((slen - (size_t)start) + 1);
	if (!subs)
		return (NULL);
	while (s[start] && i < len)
		subs[i++] = s[start++];
	subs[i] = '\0';
	return (subs);
}

// #include <stdio.h>
// #include <limits.h>
// #include <stdint.h>

// int main()
// {
// 	printf("[%s]\n", ft_substr("hello", 1, 3));
// 	printf("[%s]\n", ft_substr("hello", 0, 3));
// 	printf("[%s]\n", ft_substr("hello", 2, 2));
// 	printf("[%s]\n", ft_substr("hello", 1, 1));
// 	printf("[%s]\n", ft_substr("hello", 0, 5));
// 	printf("[%s]\n", ft_substr("hello", 0, 100));
// 	printf("[%s]\n", ft_substr("hello", 2, 100));
// 	printf("[%s]\n", ft_substr("hello", 0, SIZE_MAX));
// 	printf("[%s]\n", ft_substr("hello", 4, 1));
// 	printf("[%s]\n", ft_substr("hello", 4, 100));
// 	printf("[%s]\n", ft_substr("hello", 5, 1));
// 	printf("[%s]\n", ft_substr("hello", 100, 3));
// 	printf("[%s]\n", ft_substr("hello", UINT_MAX, 3));
// 	printf("[%s]\n", ft_substr("hello", 2, 0));
// 	printf("[%s]\n", ft_substr("hello", 0, 0));
// 	printf("[%s]\n", ft_substr("", 0, 5));
// 	printf("[%s]\n", ft_substr("", 0, 0));
// 	printf("[%s]\n", ft_substr(NULL, 0, 3));
// }
