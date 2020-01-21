char	c_alpha(c)
{
	/* Does c is an alphanumeric letter ? */
        if ((c >= 'A' && c <= 'Z') || (c >= 'a' && c <= 'z') || (c >= '0' && c <= '9'))
        {
                return(1); /* Yes */
        }

        return(0); /* No */
}

int	ft_str_is_alpha(char *str)
{
	int	i;

	i = 0;
	while(str[i] != '\0')
	{
		/* If one of the caractere is not an alpha */
		if(c_alpha(str[i]) == 0)
			{
				return(0); /* Then we return 0 */
			}
		i++;
	}

	return(1); /* If void or all caracters are alpha, return 1 */
}
