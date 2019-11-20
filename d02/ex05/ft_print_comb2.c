#include <unistd.h>

int     ft_putchar(char c)
{
        write(1, &c, 1);
        return (0);
}

void     ft_print_comb(void)
{
	n1 = 0;
	n2 = 0;
	n3 = 0;
	n4 = 0;

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
