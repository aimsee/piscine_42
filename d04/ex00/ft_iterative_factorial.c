int	ft_iterative_factorial(int nb)
{
	int     result;
        int     i;

        result = nb;
        i = 0;
	if (nb < 0 || nb > 12)
	{
		return(0);
	}
        while (++i <= nb) /* From one to nb */
        {
                result = result * i; /* Multiple the result by ++i */
        }

        return(result);
}
