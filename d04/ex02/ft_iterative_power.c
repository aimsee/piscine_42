int	ft_iterative_power(int nb, int power)
{
	int	i;
	int	result;

	i = 1;
	result = nb;
	if (power < 0) /* No negative power  */
	{
		return(0);
	}
	while (i++ < power)
	{
		result *= nb;
	}

	return(result);
}
