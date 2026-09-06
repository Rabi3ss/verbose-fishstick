#include "libft.h"


char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	if (!s || !f)
		return NULL;
	unsigned int	i;
	char		*ls;

	i = 0;
	ls = malloc(ft_strlen(s) * sizeof(char) + 1);
	while (s[i])
	{
		ls[i] = f(i, s[i]);
		i++;
	}
	ls[i] = '\0';
	return ls;
}
