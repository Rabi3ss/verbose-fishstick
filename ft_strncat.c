int ft_strlen(char *string)
{
	int len = 0;

	while(string[len])
		len++;
	
	return len;
}
char *ft_strncat(char *dest, char *src, size_t size)
{
	int counter_src = 0;
	int counter_dest = ft_strlen(dest);

	while(src[counter_src] && counter_src < size)
	{
		dest[counter_dest] =  src[counter_src];
		counter_dest++;
		counter_src++;
	}
	dest[counter_dest] = '\0';
	return dest;
}

