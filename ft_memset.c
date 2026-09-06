#include "libft.h"

void *ft_memset(void *s, int c, size_t n)
{
	unsigned char *ptr = s;
	unsigned char lc = c;

	while(0 < n)
	{
		*ptr = lc;
		ptr++;
		n--;
	}
	return s;
}
