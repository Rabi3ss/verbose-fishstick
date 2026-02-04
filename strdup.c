#include <stdio.h>
#include <stdlib.h>

int ft_strlen(char *text);
char *ft_strdup(char *s);

int main()
{
	char *otext = "fin cv bikhir";
	char *ctext = ft_strdup(otext);
	
	printf ("otext is %s", otext);
	printf ("\nand the ctext is %s", ctext);
	free(ctext);
}

int ft_strlen(char *text)
{
	int i = 0;

	while (text[i])
		i++;
	return i;
}

char *ft_strdup(char *s)
{
	char *copy;
	int i = 0;

	copy = (char *)malloc((ft_strlen(s) + 1) * sizeof(char));
	if (copy == NULL)
		return NULL;
	while (s[i])
	{
		copy[i] = s[i];
		i++;
	}
	copy[i + 1] = '\0';
	return copy;
}
