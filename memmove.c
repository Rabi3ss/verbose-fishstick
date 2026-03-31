#include <stdio.h>

void *ft_memmove(void *dest, const void *src, size_t n);

int main()
{

}
//https://marmota.medium.com/c-language-making-memmove-def8792bb8d5
void *ft_memmove(void *dest, const void *src, size_t n)
{
	unsigned char		*ldest;
	const unsigned char	*lsrc;
	int			i;
	
	ldest = (unsigned char *)dest;
	lsrc = (unsigned char *)src;
	if (!ldest && !lsrc)
		return 0;
	i = 0;
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
	return dest;
}
