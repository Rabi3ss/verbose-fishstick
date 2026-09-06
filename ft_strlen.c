#include "libft.h"

int ft_strlen(const char *a)
{
  int i = 0;

    while (a[i])
        i++;
    return i;    
}
