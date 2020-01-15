int	ft_recursive_power(int nb, int power)
{
	if (power < 0) /* Negative are excluded  */
	{
		return(0);
	}
	if (power == 0) /* For 0 directly return the solution */
	{
		return(1);
	}
	if (power == 1)
	{
		return(nb); /* for 1 directly return the solution */
	}

	return(nb*ft_recursive_power(nb, power-1)); /* multiply nb by nb number of time 
						    ** power tell us */
}
