char	c_num(c)
{
	/* Check if c is numeric */
	if((c >= '0') && (c <= '9'))
	{
		return(1); /* Yes */
	}

	return(0); /* No */
}

int	ft_str_is_numeric(char *str)
{
	int	i;

	i = 0;
	while(str[i] != '\0')
	{
		/* If the caracter is not numeric return 0 */
		if(c_num(str[i]) == 0)
		{
			return(0);
		}
		i++;
	}

	return(1); /* If str is empty or if str is numeric, return 1 */
}
