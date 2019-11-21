#include <unistd.h>

int	ft_putchar(char c)
{
	write(1, &c, 1);
	return (0);
}

int	ft_putnbr(int nb)
{
	unsigned int	nbr;

	if (nb <0)
	{
		ft_putchar('-');
		nbr = nb * -1;
	}
	else
		nbr = nb;
	if (nbr >= 10)
	{
		ft_putnbr(nbr /10);
	}
	ft_putchar(nbr % 10 + 48);
}

int	main()
{
	ft_putnbr(42);
	return (0);
}
