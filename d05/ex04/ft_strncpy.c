char	*ft_strncpy(char *dest, char *src, unsigned int n)
{
	int	index;

	index = 0;
	/* From 0 to n and from 0 to \0 copy src to dest */
	while((index < n) && (src[index] != '\0'))
	{
		dest[index] = src[index];
		index++;
	}
	/* When src is shorter than dest copy \0 to dest until n*/
	while(index < n)
	{
		dest[index] = '\0';
		index++;
	}

	return(dest);
}
