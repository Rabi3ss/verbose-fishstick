#include <stdio.h>

char *ft_strncat(char *dest,char *src, size_t size);
int ft_strlen(char *string);

int main()
{
	char dest[12] = "hello my ";
	char src[] = "mamai";
	char *the_cat = ft_strncat(dest, src, 2);

	printf("%s", the_cat);
}

int ft_strlen(char *string)
{
	int len = 0;

	while(string[len])
		len++;
	
	return len;
}
char *ft_strncat(char *dest, char *src, size_t size)
{
	int counter_src = 0;
	int counter_dest = ft_strlen(dest);

	while(src[counter_src] && counter_src < size)
	{
		dest[counter_dest] =  src[counter_src];
		counter_dest++;
		counter_src++;
	}
	dest[counter_dest] = '\0';
	return dest;
}

