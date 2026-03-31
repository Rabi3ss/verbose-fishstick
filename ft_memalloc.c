#include <stdlib.h>
#include <stdio.h>

void *ft_memalloc(size_t size);

int main()
{

}

void *ft_memalloc(size_t size)
{
	unsigned char 	*re;
	size_t		i;
	
	i = 0;
	re = (unsigned char *)malloc(size);
	if (re == NULL)
		return NULL;
	while (size > i)
	{
		re[i] = '\0';
		i++;
	}
	return 	re; 
}

