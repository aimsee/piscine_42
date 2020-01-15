char	*ft_strstr(char *str, char *to_find)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	/* return str if to_find is 0 */
	if (to_find == 0)
	{
		return(str);
	}
	/* Compare the first bit of to_find to all str bits */
	while (str[i] != '\0')
	{
		/* When the first bit of to_find = a bit of str we compare the next bit */
		while (to_find[j] == str[i])
		{
			i++;
			j++;
		}
		/* If we compare successfully all bits of to_find 
		** then to_find is well included in str */
		if (to_find[j] == '\0')
		{
			/* Then we return the first bit of str containing to_find */
			return(str[i-j]);
		}
		j = 0;
		i++;
	}

	return (0);
}
