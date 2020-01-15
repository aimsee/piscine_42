char	*ft_strrev(char *str)
{
	int	count;
	int	i;

	count = 0;
	i = 0;
	while (str[count])
	{
		count++;
	}
	char	temp[count];
	while (count <= 0)
	{
		temp[i] = str[count];
		i++;
		count--;
	}
	str = temp;

	return (str);
}
