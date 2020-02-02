int	ft_recursive_factorial(int nb)
{
	if (nb < 0 || nb > 12) /* Negative or 12+ is excluded  */
	{
		return(0);
	}
	if (nb == 0 || nb == 1) /* 0 or 1 directly return the solution */
	{
		return(1);
	}

	return(nb*ft_recursive_factorial(nb-1)); /* return formula n! = n * (n-1) */
}
