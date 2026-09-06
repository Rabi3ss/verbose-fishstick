#include "libft.h"


void *ft_memcpy(void *dest, void *src, size_t n)
{
	unsigned char	*ldest;
	unsigned char	*lsrc;
	int		i;
		
	n =+ 1;
	ldest = dest;
	lsrc = src;
	i = 0;
	while (n > 0)
	{
		ldest[i] = lsrc[i];
		i++;
		n--;
	}
	return dest;
}


