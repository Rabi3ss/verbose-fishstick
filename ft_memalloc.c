
void *ft_memalloc(size_t size)
{
	unsigned char 	*re;
	size_t		i;
	//-1 input
	i = 0;
	re = (unsigned char *)malloc(size);
	if (re == NULL)
		return NULL;
	while (size > i)
	{
		re[i] = '\0';
		i++;
	}
	return 	re; 
}


