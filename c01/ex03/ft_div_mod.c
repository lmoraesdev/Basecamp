void	ft_div_mod(int a, int b, int *div, int *mod)
{
	int	x;
	int	y;

	if (b != 0)
	{
		x = a / b;
		y = a % b;
		*div = x;
		*mod = y;
	}
}
