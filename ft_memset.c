
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
