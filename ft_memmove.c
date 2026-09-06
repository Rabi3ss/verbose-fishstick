#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	unsigned char		*ldest;
	const unsigned char	*lsrc;
	int			i;
	int			last;
	ldest = (unsigned char *)dest;
	lsrc = (unsigned char *)src;
	if (!ldest && !lsrc)
		return 0;
	i = 0;
	last = n;
	if (ldest > lsrc)
	{
		while (n > 0)
		{
			n--;
			ldest[n] = lsrc[n];
		}
		return dest;
	}	
	while (n > 0)
	{
		ldest[i] = lsrc[i];
		i++;
		n--;
	}
	ldest[last] = '\0';
	return dest;
}
