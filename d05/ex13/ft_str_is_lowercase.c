char	c_small(c)
{
	/* Check if the caracter is a small letter */
	if((c >= 'a') && (c <= 'z'))
	{
		return(1); /* Yes */
	}

	return(0); /* No */
}

int	ft_str_is_lowercase(char *str)
{
	int	i;
	
	i = 0;
	while(str[i] != '\0')
	{
		/* When the caracter is not a small letter return 0 */
		if(c_small(str[i]) == 0)
		{
			return(0);
		}
		i++;
	}

	return(1); /* If str is empty or only got small letter, return 1 */
}
