#include "libft.h"

void  ft_putstr_fd(char const *str, int fd)
{
  while (*str)
  {
    write(fd, str, 1);
    str++;
  }
}
