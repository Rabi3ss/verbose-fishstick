#include <stdio.h>
#include <stdlib.h>

void ft_memdel(void **ap);

int main()
{

}

void ft_memdel(void **ap)
{
	if (ap != NULL && *ap != NULL)
	{
		free(*ap);	
		*ap = NULL;
	}
}



