void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putstr(char *str)
{
	int	index;

	index = 0;
	while (str[index] != '\0') /* From first caractere index 0 to end \0 of the tab */
	{
		ft_putchar(str[index]); /* Write the caractere at tab[index] */
		index++; /* Incrementation of index */
	}
}
