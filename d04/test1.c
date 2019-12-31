int	fn(int i)
{
	if (i <= 5)
	{
		i++;
		fn(i);
		return (0);
	}
	else
	{
		return(0);
	}
}
