int	ft_str_is_alpha(char c)
{
	int	is_alpha;

	is_alpha = 0;
	if (c >= 'a' && c <= 'z')
		is_alpha = 1;
	if (c >= 'A' && c <= 'Z')
		is_alpha = 1;
	if (is_alpha == 0)
		return (0);
	return (1);
}

int	ft_str_is_numeric(char c)
{
	int	is_number;

	is_number = 0;
	if (c >= '0' && c <= '9')
		is_number = 1;
	if (is_number == 0)
		return (0);
	return (1);
}

char	*ft_strlowcase(char *str)
{
	int	i;

	i = -1;
	while (str[++i] != '\0')
	{
		if (str[i] >= 'A' && str[i] <= 'Z')
			str[i] = str[i] + 32;
	}
	return (str);
}

char	*ft_strcapitalize(char *str)
{
	int	i;

	i = -1;
	str = ft_strlowcase(str);
	while (str[++i] != '\0')
	{
		if (str[i] >= 'a' && str[i] <= 'z')
		{
			if (!ft_str_is_alpha(str[i - 1]) && !ft_str_is_numeric(str[i - 1]))
				str[i] = str[i] - 32;
		}
	}
	return (str);
}
