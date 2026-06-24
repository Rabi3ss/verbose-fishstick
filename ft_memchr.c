void *ft_memchr(void *str, int c, size_t n)
{
	unsigned char *lstr;

	lstr = str;
	while (n > 0)
	{
		if (*lstr == c)
			return lstr;
		lstr++;
		n--;
	}
	return NULL;
}
