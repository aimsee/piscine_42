char	*ft_strlowcase(char *str)
{
	int	i;

	i = 0;
	while(str[i] != '\0')
	{
		/* If it's a capital letter, turn it into small letter by checking the value difference between 'a' and 'A'*/
		if((str[i] >= 'A') && (str[i] <= 'Z'))
		{
			str[i] = str[i] + ('a' - 'A');
		}
		i++;
	}

	return(str);
}
