int ft_atoi(char *str)
{
	int number = 0;
	int NorP = 0;
	
	while((*str >= 9 && *str <= 13) || *str == 32)
		str++;	
	if(*str == 45)
	{
		NorP = 1;
		str++;
	}
	else if(*str == 43)
	{
		NorP = 0;
		str++;
	}
	if(*str >= 48 && *str <= 57)
	{
		while(*str >= 48 && *str <= 57)
		{
			number = (number * 10) + (*str - 48);
			str++;
		}
	}else 
		return 0;
	if(NorP == 1)
		return number * (-1);
	return number;	
}


