#include "libft.h"


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
