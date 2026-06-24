void	ft_strclr(char *str)
{
	if (str)
		while (*str)
		{
			*str = '\0';
			str++;
		}
}

