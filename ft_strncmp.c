#include "libft.h"

int ft_strncmp(char *s1, char *s2, size_t n)
{
	int i = 0;

	if(n == 0)
		return 0;

	while(s1[i] && s1[i] == s2[i] && n > 1)
	{
		i++;
		n--;
	}
	return s1[i] - s2[i];
}
