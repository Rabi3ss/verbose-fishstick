#include <stdio.h>

void	ft_strclr(char *str);

int main()
{

}

void	ft_strclr(char *str)
{
	if (str)
		while (*str)
		{
			*str = '\0';
			str++;
		}
}

