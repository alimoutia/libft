
#include "libft.h"

void *ft_memcpy(void *dst, const void *src, size_t n)
{
	size_t i;
	unsigned char *dsst;
	const unsigned char *srrc;

	if (!dst && !src)
		return (NULL);
	i = 0;
	dsst = (unsigned char *)dst;
	srrc = (const unsigned char *)src;
	while (i < n)
	{
		dsst[i] = srrc[i];
		i++;
	}
	return (dst);
}
