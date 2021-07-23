void	ft_putchar(char c);

void	print_line(int x, char first, char mid, char last)
{
	if (x == 1)
	{
		ft_putchar(first);
		ft_putchar('\n');
	}
	else
	{
		ft_putchar(first);
		while (x-- > 2)
		{
			ft_putchar(mid);
		}
		ft_putchar(last);
		ft_putchar('\n');
	}
}

void 	rush(int x, int y)
{
	if (x != 0 || y != 0)
	{
		if (y > 2)
		{
			print_line(x, 'A', 'B', 'C');
			while (y-- > 2)
			{
				print_line(x, 'B', ' ', 'B');
			}
			print_line(x, 'A', 'B', 'C');
		}
		else
		{
			if (y == 2)
			{
				print_line(x, 'A', 'B', 'C');
				print_line(x, 'A', 'B', 'C');
			}
			else
			{
				print_line(x, 'A', 'B', 'C');
			}
		}
	}
}
