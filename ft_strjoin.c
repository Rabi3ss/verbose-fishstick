#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	if (!s1 || !s2) return NULL;
	char	*str;
	int	len1;
	int	len2;
	int	i;


	len1 = ft_strlen(s1);
	len2 = ft_strlen(s2);
	i = 0;
	str = malloc((len1 + len2 + 1) * sizeof(char));
	if (str == NULL) return NULL;
	while (len1 > i)
	{
		str[i] = s1[i];
		i++;
	}
	while (len2 > 0)
	{
		str[i] = *s2;
		i++;
		s2++;
		len2--;
	}
	str[i] = '\0';
	return str;

}
