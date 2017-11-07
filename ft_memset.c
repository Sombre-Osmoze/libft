#include <string.h>

void	*ft_memset(char *b, int c, size_t len)
{
	size_t i;

	i = 0;
	while (i < len) {
		b[i] = (unsigned char) c;
		i = i + 1;
	}
	return (b);
}
