#include <string.h>
#include <stdlib.h>

void *ft_memccpy(void *dst, const void *src, int c, size_t n)
{
	size_t i;
	int find;
	unsigned char *src_p;
	unsigned char *dst_p;

	i = 0;
	find = 0;
	src_p = (unsigned char *)src;
	dst_p = dst;
	while (i < n && !find)
	{
		if (src_p[i] == c)
			find = 1;
		*dst_p++ = (unsigned char)src_p[i];
		i++;
	}
	if (!find)
		return (NULL);
	return (dst_p);
}
