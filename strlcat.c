#include <stdio.h>

int ft_strlcat(char *dest, char *src, size_t size);
int ft_strlen(char *string);

int main()
{
	char  dest[10] =  "hello";
	char src[] = "rabi";
	int string = ft_strlcat(dest, src, 10);

	printf("%i", string);
}

int ft_strlen(char *string)
{
	int i = 0;

	while(string[i])
		i++;
	return i;	
}

int ft_strlcat(char *dest, char *src, size_t size)
{ 
	int counter_src = ft_strlen(src); 
	int counter_dest = ft_strlen(dest);
       int i = 0;	
	
	while(src[i] && counter_dest + i < size - 1) 
	{ 
		dest[counter_dest + i] = src[i]; 
	       i++;	
	}
     	dest[counter_dest + i] = '\0'; 
	return counter_dest + counter_src;	
} 

