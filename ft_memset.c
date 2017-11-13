#include <string.h>

void	*ft_memset(void *b, int c, size_t len)
{
	size_t i;
	char *b_p;

	b_p = b;
	i = 0;
	while (i < len)
		b_p[i++] = (unsigned char) c;
	return (b);
}
