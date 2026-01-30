#include <stdio.h>

char *ft_strcpy(char *dst, char *src);

int main ()
{
    char source[] = "Hello, World!";
    char destination[50]; 

    ft_strcpy(destination, source);
    printf("Copied string: %s\n", destination);

	return 0;
}

char *ft_strcpy(char *dst, char *src)
{
	char *dest = dst;
	
	while (*src)
	{
		*dst = *src;
		dst++;
		src++;
	}

	*dst = '\0';

	return (dest);
}
