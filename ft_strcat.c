#include "libft.h"

char *ft_strcat(char *dst, const char *src)
{
	int i = 0;
	int end_dst = ft_strlen(dst);

	while (src[i])
	{
		dst[end_dst] = src[i];
		end_dst++;
		i++;
	}
	dst[end_dst] = '\0';
	return dst;
}
