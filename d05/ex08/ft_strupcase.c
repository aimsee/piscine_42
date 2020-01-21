char	*ft_strupcase(char *str)
{
	int	i;

	i = 0;
	while(str[i] != '\0')
	{
		/* If it's a small letter */
		if ((str[i] >= 'a') && (str[i] <= 'z'))
		{
			/* Then we change the small letter into capital letter */
			str[i] = str[i] - ('a' - 'A'); /* a-A to check the ascii difference between small en capital letters */
		}
		i++;
	}

	return(str);
}
