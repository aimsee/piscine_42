void ft_sort_integer_table(int *tab, int size);
{
	int i;
	int j;
	int tmp;

	i = 0;
	j = 1;
	while (i <= size)
	{
		if (tab[j] <= tab[i])
		{
			tmp = tab[i];
			tab[i] = tab[j];
			tab[j] = tmps;
			j++;
		}
		i++;
	}
}
