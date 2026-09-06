#include "libft.h"

int ft_strlcat(char *dst, char *src, size_t size)
{ 
	size_t counter_src = ft_strlen(src); 
	size_t counter_dst = ft_strlen(dst);
	size_t				i;

	i = 0;	
	while(src[i] && counter_dst + i < size - 1) 
	{ 
		dst[counter_dst + i] = src[i]; 
	       i++;	
	}
     	dst[counter_dst + i] = '\0'; 
	return counter_dst + counter_src;	
}
