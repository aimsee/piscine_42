int	ft_fibonacci(int index)
{
	if (index < 0 ) /* For negatives return -1 */
	{
		return(-1);
	}
	if (index == 0) /* For 0 directly return de solution */
	{
		return(0);
	}

	return(ft_fibonacci(index - 1) + ft_fibonacci(index - 2)); /* F(n) = F(n-1)+F(n-2) */
}
