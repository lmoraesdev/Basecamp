int	ft_str_is_uppercase(char *str)
{
	int	i;
	int	uppercase;

	i = 0;
	uppercase = 1;
	while (str[i] != '\0')
	{
		if (str[i] < 'A' || str[i] > 'Z')
		{
			uppercase = 0;
		}
		i++;
	}
	return (uppercase);
}
