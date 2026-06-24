
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

//test this memcopy with system function test null in and overlap of function c  
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
			return &ldest[i];
		i++;
	}
	return NULL;
}

 void main()
{

	char	dest[10];
	char	src[10] = "fin cv hni";
	
	printf ("%s\n", memccpy(dest, src, 'c', 7));
	//printf ("%s", dest);
	printf ("%s\n", ft_memccpy(dest, src, 'c',7));


	//printf ("%s\n",memccpy(dest, NULL ,'c', 8));//seg
	 //printf ("%s\n",ft_memccpy(dest, NULL, 'c', 8));

	//printf ("%s\n",memccpy(NULL, "fin cv hni", 'c', 8));
	// printf ("%s\n",ft_memccpy(NULL, "fin cv hni", 'c', 8));


}
