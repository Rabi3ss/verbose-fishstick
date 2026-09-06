#include "libft.h"

int	ft_strnequ(char const *s1, char const *s2, size_t n)
{
	if (!s1 || !s2)
		return 0;
	if (n == 0)
		return 1;

	while (n > 1 && *s1 == *s2 && *s1)
	{
		s1++;
		s2++;
		n--;
	}
	if (*s1 == *s2)
		return 1;
	return 0;
}


