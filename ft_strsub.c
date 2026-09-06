#include "libft.h"

	
char	*ft_strsub(char const *s, unsigned int start, size_t len)
{
	char		*str;
	int		i;
	unsigned int	IsIn;

	IsIn = ft_strlen(s);
	i = 0;
	if (start > IsIn) return NULL;
	if (IsIn < start + len) return NULL;
	str = malloc(len * sizeof(char) + 1);
	if (str == NULL) return NULL;	
	while (len > 0)
	{
		str[i] = s[start + i];
		len--;
		i++;
	}
	str[i] = '\0';
	return str;

}
