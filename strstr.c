#include <stdio.h>

char *ft_strstr(char *haystack, char *needle);

int main()
{

    char *txet = "          	fin cv hani bikhir";
    char *find = "v";
    char *a = ft_strstr(txet , find);

    printf("a = %s" , a);
}

char *ft_strstr(char *haystack, char *needle)
{
	int i = 0;

	if (!*needle)
		return haystack;

    //this while for skip white speaes
	while (haystack[i] >= 0 && haystack[i] <= 32)
		i++;

	i = 0;
	while (*haystack)
	{
		while (haystack[i] && needle[i] && haystack[i] == needle[i])
			i++;
		if (needle[i] == '\0')
			return haystack;
		i = 0;
		haystack++;
	}

	return NULL;
}
