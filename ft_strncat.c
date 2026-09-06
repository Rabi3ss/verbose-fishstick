#include "libft.h"


char *ft_strncat(char *dst, char *src, size_t size)
{
	size_t counter_src = 0;
	size_t counter_dst = ft_strlen(dst);

	while(src[counter_src] && counter_src < size)
	{
		dst[counter_dst] =  src[counter_src];
		counter_dst++;
		counter_src++;
	}
	dst[counter_dst] = 0;
	return dst;
}

