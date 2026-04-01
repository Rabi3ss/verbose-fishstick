#include <stdio.h>

void	ft_striter(char *str, void (*f)(char *));
void	
int main()
{

}

void	ft_striter(char *str, void (*f)(char *))
{
	if (!str || !f)
		return ;
	while (*str)
	{
		f(str);
		str++;
	}
}
	
