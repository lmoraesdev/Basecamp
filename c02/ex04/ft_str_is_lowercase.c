int	ft_str_is_lowercase(char *str)
{
	int	i;
	int	lowercase;

	i = 0;
	lowercase = 1;
	while (str[i] != '\0')
	{
		if (str[i] < 'a' || str[i] > 'z')
		{
			lowercase = 0;
		}
		i++;
	}
	return (lowercase);
}
