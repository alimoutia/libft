
#include "libft.h"

void *ft_memchr(const void *s, int c, size_t n)
{
	const unsigned char *ss;
	size_t i;

	i = 0;
	ss = (const unsigned char *)s;
	while (i < n)
	{
		if (ss[i] == (unsigned char)c)
			return ((void *)&ss[i]);
		i++;
	}
	return (NULL);
}
