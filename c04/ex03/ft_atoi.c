int	ft_atoi(char *str)
{
	int	number;
	int	sign;

	number = 0;
	sign = 1;
	while ((*str >= 9 && *str <= 13) || *str == 32)
		str++;
	while (*str == '+' || *str == '-')
	{
		if (*(str) == '-')
		{
			sign = sign * (-1);
		}
		str++;
	}
	while (*str >= '0' && *str <= '9')
	{
		number *= 10;
		number += *(str) - '0';
		str++;
	}
	return (number * sign);
}
