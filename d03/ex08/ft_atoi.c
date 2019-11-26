int	ft_atoi(char *str);
{
	char	tmp;
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		tmp = tmp * 10 + str[i] - '0';
		i++;
	}
	return (tmp);
}
