
#include "libft.h"

void *ft_calloc(size_t count, size_t size)
{
	size_t all;
	void *ptr;

	all = count * size;
	if (count != 0 && all / count != size)
		return (NULL);
	ptr = malloc(size * count);
	if (!ptr)
		return (NULL);
	ft_bzero(ptr, all);
	return (ptr);
}
