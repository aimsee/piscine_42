#include <unistd.h>

int     ft_putchar(char c)
{
        write(1, &c, 1);
        return (0);
}

void ft_putnbr(int nb)
{
	if (nb == -2147483648)
	{
		ft_putnbr(-2);
		ft_putnbr(147483648);
	}
	if (nb < 0 && nb != -2147483648)
	{
		nb = -nb;
		ft_putchar('-');
	}
	if (nb >= 10)
	{
		ft_putnbr(nb / 10);
	}
	if (nb >= 0)
	{
		ft_putchar((nb % 10) + '0');
	}
}

int     main()
{

        ft_putnbr(42);
        ft_putchar('\n');
        return (0);
}
