#include <stdio.h> 

char *ft_strchr(char *s, int c);

int main()
{	
     	printf("%s", ft_strchr("fin cv haib", 99));
    

}

char *ft_strchr(char *s, int c)
{  
    while(*s)
    {
        if (*s == c)
            return s;
        s++;
    }
    if (c == *s)
	    return s;
    return 0;
}
