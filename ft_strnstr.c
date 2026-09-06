#include "libft.h"

char *ft_strnstr(char *big, char *little, size_t len)
{
	if(*little == '\0')
		return big;
	int i = 0;
	int j = 0;

	while(big[i] && i < len)
	{
		j = 0;
		while(big[i + j] == little[j] && little[j] && i + j < len)
		{
			j++;
		}
		if(little[j] == '\0')
			return &big[i];
		i++;
	}
	return NULL;
}
