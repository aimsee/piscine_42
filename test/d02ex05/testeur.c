#include <unistd.h>

int     ft_putchar(char c)
{
        write(1, &c, 1);
        return (0);
}

void     ft_print_comb2(void)
{
	char	n1;
	char	n2;
	char	n3;
	char	n4;

	n1 = 48;
	n2 = 48;
	n3 = 48;
	n4 = 48;
        while (n1 <= 57)
        {
                n2 = 48;
                while (n2 <= 57)
                {
                        n3 = 48;
                        while (n3 <= 57)
                        {
                                n4 = 48;
                                while (n4 <= 57)
                                {
                                        if (n4 > n2 && n3 >= n1)
					{
						ft_putchar(n1);
                                        	ft_putchar(n2);
                                        	ft_putchar(' ');
                                        	ft_putchar(n3);
                                        	ft_putchar(n4);
						if (!(n1 == 57 && n2 == 56 && n3 == 57 && n4 ==57))
						{
                                        		ft_putchar(',');
                                        		ft_putchar(' ');
						}
					}
					n4++;
				}
				n3++;
			}
			n2++;
		}
		n1++;
	}
}

int     main()
{
        ft_print_comb2();
        ft_putchar('\n');
        return (0);
}
