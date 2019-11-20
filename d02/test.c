#include <unistd.h>

int	ft_putchar(char c)
{
	write(1, &c, 1);
	return (0);
}

int	ft_print_comb(char n1, char n2, char n3, char n4)
{
	n1--;
	while (++n1 <= '9')
	{
		n2 = '0';
		while (++n2 <= '9')
		{
			n3 = '0';
			while (++n3 <= '9')
			{
				n4 = '0';
				while (n4 <= '9')
				{
					ft_putchar(n1);
					ft_putchar(n2);
					ft_putchar(' ');
					ft_putchar(n3);
					ft_putchar(n4);
					ft_putchar(',');
					ft_putchar(' ');
					n4++;
				}
			}
		}
	}
}

int	main()
{
	ft_print_comb('0', '0', '0', '0');
	return (0);
}
