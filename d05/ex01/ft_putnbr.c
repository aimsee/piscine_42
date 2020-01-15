void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putnbr(int nb)
{
        if (nb == -2147483648) /* Exception for this number that we can't manipulate later */
        {
                ft_putnbr(-2);
                ft_putnbr(147483648); /* We can manipulate -2 in one hand and 147483648 in the other hand */
        }
        if (nb < 0 && nb != -2147483648) /* In case nb is negative */
        {
                nb = -nb; /* Make nb a positive */
                ft_putchar('-'); /* Write the negative sign */
        }
        if (nb >= 10)
        {
                ft_putnbr(nb / 10); /* Move the coma */
        }
        if (nb >= 0)
        {
                ft_putchar((nb % 10) + '0'); /* exemple 42%10=2 4%10=4 */
        }
}
