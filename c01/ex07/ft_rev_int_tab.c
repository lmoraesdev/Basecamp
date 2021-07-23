void	ft_rev_int_tab(int *tab, int size)
{
	int	i;
	int	s;
	int	end;

	i = 0;
	end = size;
	while (i < (size / 2))
	{
		s = tab[end - 1];
		tab[end - 1] = tab[i];
		tab[i] = s;
		i++;
		end--;
	}
}
