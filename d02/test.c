#include <unistd.h>

int ft_putchar(char c)
{
	write(1, &c, 1);
	return (0);
}

int ft_print_combn(int n)
{
	int i;
	int j;
	int matrice[n][9];
	i = 0;
	j = 0;
	while (i < 10)
	{
		matrice[i][j] = i;
		ft_putchar(i + 48);
		i++;
		while (++j < n)
			{
				matrice[i][j] = j;
				ft_putchar(j + 48);
			}
	}
}

int	main()
{
	ft_print_combn(2);
	return (0);
}
