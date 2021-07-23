void	ft_sort_int_tab(int *tab, int size)
{
	int	i;
	int	aux;

	i = 0;
	while (i <= size)
	{
		if (tab[i] >= tab[i + 1])
		{
			aux = tab[i + 1];
			tab[i + 1] = tab [i];
			tab[i] = aux;
			i = -1;
		}
		i++;
	}
}
