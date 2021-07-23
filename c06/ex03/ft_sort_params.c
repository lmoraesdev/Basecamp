#include <unistd.h>

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
		i++;
	return (i);
}

int	ft_strcmp(char *s1, char *s2)
{
	int	i;

	i = 0;
	while (s1[i] != '\0' && s2[i] != '\0' && s1[i] == s2[i])
	{
		i++;
	}
	return ((unsigned char)s1[i] - (unsigned char)s2[i]);
}

void	swap(int index1, int index2, char **argv)
{
	char	*tmp;

	tmp = argv[index1];
	argv[index1] = argv[index2];
	argv[index2] = tmp;
}

int	sort(int index1, int index2, char **argv)
{
	if (ft_strcmp(argv[index1], argv[index2]) > 0)
	{
		swap(index1, index2, argv);
		return (1);
	}
	return (0);
}

int	main(int argc, char **argv)
{
	int	i;
	int	changed;

	changed = 1;
	while (changed)
	{
		i = 1;
		changed = 0;
		while (i < argc - 1)
		{
			if (sort(i, i + 1, argv))
				changed = 1;
			i++;
		}
	}
	i = 1;
	while (i < argc)
	{
		write(1, argv[i], ft_strlen(argv[i]));
		write(1, "\n", 1);
		i++;
	}
	return (0);
}
