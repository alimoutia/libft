
#include "libft.h"

void *ft_memset(void *b, int c, size_t len)
{
	size_t i;
	unsigned char *bb;
	
	i = 0;
	bb = (unsigned char *)b;
	while (i < len)
	{
		bb[i] = (unsigned char)c;
		i++;
	}
	return (b);
}

// #include <stdio.h>

// int main()
// {
// 	char b[] = "Hello";
// 	printf("%s", ft_memset(b, 68, 6));	
// }
