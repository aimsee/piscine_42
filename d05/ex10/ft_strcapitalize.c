int	c_alpha(char c)
{
	/* Does c is an alphanumeric letter ? */
	if ((c >= 'A' && c <= 'Z') || (c >= 'a' && c <= 'z') || (c >= '0' && c <= '9'))
	{
		return (1); /* Yes */
	}

	return (0); /* No */
}

char	*ft_strcapitalize(char *str)
{
	int i;

	i = 0;
	while (str[i] != '\0')
	{
		/* for the first caractere of the string or if the previous caractere is not an alpha */
		if (i == 0 || !c_alpha(str[i - 1]))
		{
			/* then if the caractere is a small letter, turn it into capitale letter */
			if (str[i] >= 'a' && str[i] <= 'z')
			{
				str[i] = str[i] - ('a' - 'A'); /* by checking value between 'a' and 'A' in the ascii table */
			}
		}
		/* esle if the caractere is a capitale letter, then turn it in small letter */
		else if (str[i] >= 'A' && str[i] <= 'Z')
			{
			str[i] = str[i] + ('a' - 'A'); /* by checking value between 'a' and 'A' in the ascii table */
			}
		i++;
	}

	return (str);
}
