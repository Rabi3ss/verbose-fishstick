char  *ft_iota(int n)
{
  char *ret;
  int len;
  long ln;

  ln = n;
  len = 0;
  // ila kan 3dad salib -
  if (n < 0) 
  {
    len++;
    ln = ln * (-1);
  }
  // bach n7sbo lante 
  while (ln != 0)
  {
    ln = ln / 10;
    len++;
  }
  if (n == 0) len++;
  // han kan7jzo
  ret = malloc(sizeof(char) * len + 1);
  if (!ret) return NULL;
  ln = n;
  if (n < 0)
  {
    ln *= (-1);
    ret[0] = '-';
  }
  if (ln == 0)
    ret[0] = '0';
  ret[len] = '\0'; 
  while(ln > 0)
  {
    ret[--len] = (ln % 10) + '0';
    ln /= 10;
  }
  return ret;
}
