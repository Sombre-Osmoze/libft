#include <string.h>

void ft_bzero(void *s, size_t n)
{
	int i;
	char *s_p;

	s_p = s;
	i = 0;
	while (i < n)
			s_p[i++] = '0' ;
}
