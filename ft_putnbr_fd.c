void  ft_putnbr_fd(int  n, int fd)
{
  long  ln;
  char  N;
  char num;

  ln = n;
  N = '-';
  if (n < 0)
  {
    write(fd, &N, 1);
    ln *= (-1);
  }
  if ((ln / 10) != 0) 
    ft_putnbr_fd(ln / 10 , fd);
  num = (ln % 10) + '0';
  write(fd, &num, 1);

}
