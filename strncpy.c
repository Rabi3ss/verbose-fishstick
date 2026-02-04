#include <stdio.h>

char *ft_strncpy(char *dest, char *src, size_t n);
/*
int main()
{
  char src[] = "Hello";
    char dest[10] = {0}; // Initialize to zero

    ft_strncpy(dest, src, 3);
    printf("Copied: %s\n", dest); // Output: Copied: Hello
	
}
*/
char *ft_strncpy(char *dest, char *src, size_t n)
{
	char *local_dest = dest;
	int local_n = 0;

	while (*src && n > local_n)
	{
		*dest = *src;
		dest++;
		src++;
		local_n++;
	}
	while (local_n < n)
	{
		local_dest[local_n] = '\0';
		local_n++;
	}
	return local_dest;
}
