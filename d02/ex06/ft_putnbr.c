#include <unistd.h>

int	ft_putchar(char c)

int	ftputnbr(int nb);
{
	unsigned int	nbr;

	if (nb < 0)
	{
		ft_putchar('-');
		nbr = nb * -1;
	}
	else
		nbr = nb;
	if (nbr >= 10)
	{
		ft_putnbr(nbr / 10)
	}
	ft_putchar(nbr % 10 + 48);
}
