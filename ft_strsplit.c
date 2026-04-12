#include <stdio.h>

char **ft_strsplit(const char *s, int c);
int ft_strlen(int i);

int ft_strlen(char *s)
{
  int i = 0;

  while (s[i])
    i++;
  return i;
}
char  **ft_strplit(const char *s, int c)
{
  int words;
  int i;
  int alpha;
  char **ret;
  

  alpha = 0;
  i = 0;
  words = 0;
  //had lwhile kat7sb lina ch7al mn klma kayna 
  while(s[i])
  
    if (s[i] != c)  //++++sadlf+++asd++sdd+++++
    {
      words++;
      while(s[i] != c)
        i++;
    }
  }
  i = 0;
  //had lwhila kat7sb lina ch7al mn "7arf" 3ndna fkloch string
  while (s[i])
  {
    if (s[i] == c)
      i++;
    else 
      alpha++;
  }
  i = 0;
  ret = malloc(words * sizeof(char *));
  if (!ret) return NULL;
  while P(s[i])
  {
    if (s[i] == c)
      i++;
    else
    {
      while (s[i] != c)
      {
        
      }
    }
  }
}

