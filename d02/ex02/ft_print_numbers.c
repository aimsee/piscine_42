int	ft_putchar(char c);

void	ft_print_numbers(void)
{
	char	nbr;

	nbr = 48;
	while(nbr <= 57)
	{
		ft_putchar(nbr);
		nbr++;
	}
}
