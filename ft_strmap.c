#include <stdio.h>

char 	*ft_strmap(char const *s, char (*f)(char));
int	ft_strlen(char const *s);

int main()
{

}

int	ft_strlen(char const *s)
{
	int	i;

	i = 0;
	while (s[i])
		i++
	return i;
}

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
