int	ft_str_is_numeric(char *str)
{
	int	i;
	int	number;

	i = 0;
	number = 1;
	while (str[i] != '\0')
	{
		if (str[i] < '0' || str[i] > '9')
		{
			number = 0;
		}
		i++;
	}
	return (number);
}
