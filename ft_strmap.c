#include "libft.h"

char 	*ft_strmap(char const *s, char (*f)(char))
{
	if (!s || !f)
		return NULL;
	char	*ls;
	int 	i;

	i = 0;
	ls = malloc(ft_strlen(s) * sizeof(char) + 1);
	while (s[i])
	{
		ls[i] = f(s[i]);		
		i++;
	}
	ls[i] = '\0';
	return (ls);
}
