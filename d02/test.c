#include <unistd.h>

int	ft_putchar(char c)
{
	write(1, &c, 1);
	return (0);
}

int	ft_print_comb(char n1, char n2, char n3)
{
	n1--;
	while (++n1 <= '9')
	{
		n2 = n1;
		while (++n2 <= '9')
		{
			n3 = n2 + 1;
			while (n3 <= '9')
			{
				ft_putchar(n1);
				ft_putchar(n2);
				ft_putchar(n3);
				if (n1 != '7' || n2 != '8' || n3 != '9')
				{
					ft_putchar(',');
					ft_putchar(' ');
				}
				n3++;
			}
		}
	}
}

int	main()
{
	ft_print_comb('0', '0', '0');
	return (0);
}
