#include <stdio.h>

char *ft_strrchr(char *s, int c);

int main()
{
	printf("%s", ft_strrchr("fin cv hni cv bikhir", 98)); 
}

char *ft_strrchr(char *s, int c)
{
	char *last = 0;
	while(1)
	{
		if(*s == c)
			last = s;
		if(*s == '\0')
			return last;
		s++;
	}
	return '\0';
}
