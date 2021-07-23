#include <unistd.h>

void	ft_putchar(char c)
{
	c += 48;
	write(1, &c, 1);
}

void	ft_print_comb2(void)
{
	char	n1;
	char	n2;

	n1 = 0;
	while (n1 <= 99)
	{
		n2 = n1 + 1;
		while (n2 <= 99)
		{
			ft_putchar(n1 / 10);
			ft_putchar(n1 % 10);
			write(1, " ", 1);
			ft_putchar(n2 / 10);
			ft_putchar(n2 % 10);
			if (n1 != 98 || n2 != 99)
			{
				write(1, ", ", 2);
			}
			n2++;
		}
		n1++;
	}
}
