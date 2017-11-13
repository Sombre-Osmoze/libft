#include <string.h>

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	size_t c = 0;
	unsigned char *src_p;
	unsigned char *dst_p;

	src_p = (unsigned char *)src;
	dst_p= dst;
	while (c < n)
	{
		dst_p[c] = src_p[c];
		c++;
	}
	return (dst);
}
