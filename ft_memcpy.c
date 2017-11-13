#include <string.h>

void *ft_memcpy(char *dst, const char *src, size_t n)
{
	size_t c = 0;

	while (c < n)
	{
		dst[c] = src[c];
		c++;
	}
	return (dst);
}
