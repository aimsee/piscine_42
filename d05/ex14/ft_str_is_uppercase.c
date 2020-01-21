char	c_caps(c)
{
	/* Check if c is a capital letter */
	if((c >= 'A') && (c <= 'Z'))
	{
		return(1);
	}

	return(0);
}

int	ft_str_is_uppercase(char *str)
{
	int	i;

	i = 0;
	while(str[i] != '\0')
	{
		/* When c is not a capital letter, return 0 */
		if(c_caps(str[i]) == 0)
		{
			return(0);
		}
		i++;
	}

	return(1); /* When str is empty or only filled with capital letters, return 1 */
}
