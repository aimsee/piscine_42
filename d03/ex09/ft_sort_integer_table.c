void	ft_sort_integer_table(int *tab, int size)
{
	int i;
	int j;
	int tmp;

	i = 0;
	j = 1;
	while (i <= size) /* From 0 to size of tab */
	{	
		if (tab[j] <= tab[i]) /* Compare two int in the tab */
		{
			tmp = tab[i];
			tab[i] = tab[j]; /* Replace the bigger int by the smaller int in the tab */
			tab[j] = tmps;
			j++; /* adding to j in order to compare i to all tab */
		}
		i++; /* adding to i in order to compare the next i to all tab */
	}
}
