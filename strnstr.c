#include <stdio.h>

char *ft_strnstr(char *big, char *little, size_t len);

int main()
{

}

if(*little == '\0')
	return big;

while(*little > 0 && *little < 33)
	little++;

char *ft_strnstr(char *big, char *little, size_t len)
{
	int i = 0;
	int all_word = 0;

	while(*big)
	{
		while(*big = little[i] && little[i] && *big && len >= all_word )
		{
			big++;
			len++;
			i++;
		}
		if(little[i] == '\0')
			return little; 
	}
	return NULL;
}
