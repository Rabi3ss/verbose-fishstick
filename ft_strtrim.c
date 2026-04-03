char	*ft_strtrim(char const *s);
int	ft_strlen(char *s);

int	ft_strlen(char *s)
{
	int	i;

	i = 0;
	while (s[i])
		i++;
	return i;
}

char	*ft_strtrim(char const *s)
{
	char	*str;
	int	i;
	int	len;
	int	star;

	len = ft_strlen(s);
	i = 0;
	star = 0;
//######################################################################
	while (s[star] && (s[star] == ' ' || s[star] == '\n' || s[star] == '\t'))
		star++;
	while ((s[len - 1] == ' ' || s[len - 1] == '\n' || s[len - 1] == '\t') && len > star)
		len--;
//#############################################################
	str = malloc((len - star) * sizeof(char) + 1);
	if (str == NULL) return NULL;
//######################################################	
	while (star < len )
	{
		str[i] = s[star];
		star++;
		i++;
	}
	str[i] = '\0';
	return str;
}
