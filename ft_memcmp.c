int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	unsigned char	*ls1;
	unsigned char	*ls2;

	ls1 = (unsigned char *)s1;
	ls2 = (unsigned char *)s2;
	while (n > 0)
	{
		if (*ls1 != *ls2)
			return *ls1 - *ls2;
		n--;
		ls1++;
		ls2++;
	}
	return 0;
}
