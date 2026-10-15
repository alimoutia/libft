
#include "libft.h"

int ft_memcmp(const void *s1, const void *s2, size_t n)
{
	const unsigned char *ss1;
	const unsigned char *ss2;
	size_t i;

	i = 0;
	ss1 = (const unsigned char *)s1;
	ss2 = (const unsigned char *)s2;
	while (i < n)
	{
		if (ss1[i] != ss2[i])
		{
			if (ss1[i] - ss2[i] < 0)
				return (-1);
			if (ss1[i] - ss2[i] > 0)
				return (1);
		}
		i++;
	}
	return (0);
}

/*

#include <stdio.h>
#include <string.h>

int main()
{
	printf("%d", ft_memcmp("hello", "helso", 5));
	printf("%d", memcmp("hello", "helso", 5));
}*/