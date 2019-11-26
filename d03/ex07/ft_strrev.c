char	*ft_strrev(char *str);
{
	int	i;
	int	j;
	char	tmp;

	i = 0;
	while (str[i] != '\0')
	{
		i++;
	}
	i = i - 1;
	while (i >= 0)
	{
		tmp = srt[i];
		srt[i] = srt[j];
		srt[j] = tmp;
		i--;
		j++;
	}
	return (str)
}
