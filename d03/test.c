#include <unistd.h>

int	ft_putchar(char c);
{
	write(1, &c, 1);
	return (0);
}

int	ft_ft(int *nbr);
{
	*nbr = 42;
}

int	main(void);
{
	int	nbr;

	nbr = 42;
	ft_ft(nbr);
	return (0);
}
