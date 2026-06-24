void *ft_memcpy(void *dest, void *src, size_t n)
{
	unsigned char *ldest = dest;
	unsigned char *lsrc = src;
	int i = 0;

	while(n > 0)
	{
		ldest[i] = lsrc[i];
		i++;
		n--;
	}
	return dest;
}


