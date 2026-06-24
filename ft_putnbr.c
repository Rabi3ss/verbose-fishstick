void  ft_putnbr(int n)
{
  long ln;
  char c;
  char  N;
  ln = n;
  
  N = '-';
  if (n < 0)
  {
     write(1, &N, 1);
    ln *= (-1);
  }
  if ((ln / 10) != 0)
  {
    ft_putnbr(ln / 10);
  }
  c = (ln % 10) + '0';
  write(1, &c, 1);
}

