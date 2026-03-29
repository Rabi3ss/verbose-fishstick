#include <stdio.h>

void *ft_memccpy(void *dest, void *src, int c, size_t n);

int main()
{

}

void *ft_memccpy(void *dest, const void *src, int c, size_t n)
{
	size_t			i;
	unsigned char	lc = c;
	unsigned char	*ldest;
	unsigned char	*lsrc;
	ldest =(unsigned char *)dest;
	lsrc = (unsigned char *)src;
	i = 0;

	while(i < n)
	{
		ldest[i] = lsrc[i];
		if (lc == lsrc[i])
			return &ldest[i + 1];
		i++;
	}
	return NULL;
}

 
