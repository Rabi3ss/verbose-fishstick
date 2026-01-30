#include <stdio.h>

char *ft_strcat(char *dest, char *src);
int ft_strlen(char *string);

int main ()
{
	 char dest[50] = "Hello ";
    char src[] = "World!";
    ft_strcat(dest, src);
    printf("%s\n", dest);  // Output: Hello World!
    return 0;
}

int ft_strlen(char *string)
{
	int i = 0;
	
	while (string[i])
		i++;
	return i;
}

char *ft_strcat(char *dest, char *src)
{
	int i = 0;
	int end_dest = ft_strlen(dest);

	while (src[i])
	{
		dest[end_dest] = src[i];
		end_dest++;
		i++;
	}
	dest[end_dest] = '\0';
	return dest;
}
