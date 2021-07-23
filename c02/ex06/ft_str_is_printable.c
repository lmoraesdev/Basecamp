int	ft_str_is_printable(char *str)
{
	int	i;
	int	printable;

	i = 0;
	printable = 1;
	while (str[i] != '\0')
	{
		if (str[i] < 32 || str[i] > 126)
		{
			printable = 0;
		}
		i++;
	}
	return (printable);
}
