char *ft_strnew(size_t size)
{
	char 	*str;
	size_t		i;
	
	i = 0;
	str = (char *)malloc(size + 1);
	if (str == NULL)
		return NULL;
	while (size >= i)
	{
		str[i] = '\0';
		i++;
	}
	return str;
}



