int	ft_sqrt(int nb)
{
	int i;
	int hnb;

	i = 0;
	hnb = nb / 2; /* Prepare the formula V(n)=n^1/2 */
	if (nb == 1)
	{
		return (1);
	}
	while (i <= hnb) /* From 0 to n^1/2 */
	{
		if ((i * i) == nb) /* Compare i² with nb */
		{
			return (i); /* When i² = nb return i */
		}
		i++;
	}

	return (0);
}
