int	ft_putchar(char c)

void	ft_print_comb(void)
{
	char	c1;
	char	c2;
	char	c3;

	c1 = 48;
	c2 = 49;
	c3 = 50;

	while (c1 <= 55)
        {
                while (c2 <= 56)
                {
                        while (c3 <= 57)
                        {
                                if ((c1 != c2) && (c1 != c3) && (c2 != c3))
                                {
                                        ft_putchar(c1);
                                        ft_putchar(c2);
                                        ft_putchar(c3);
                                        if (!(c1 == 55 && c2 == 56 && c3 == 57))
                                        {
                                                ft_putchar(',');
                                                ft_putchar(' ');
                                        }
                                }
                        c3++;
                        }
                c2++;
                c3 = 50;
                }
        c1++;
        c2 = 49;
        c3 = 50;
        }
}
