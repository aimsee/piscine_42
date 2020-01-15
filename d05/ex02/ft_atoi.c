int	ft_atoi(const char *str)
{
	int	res;
	int	negative;

	negative = 1;
	res = 0;
	/* Exclude all space special caracteres */
	while (*str && (*str == ' ' || *str == '\n' || *str == '\t' ||
			*str == '\v' || *str == '\f' || *str == '\r'))
	{
		++str;
	}
	/* Prepare for negative value */
	if (*str == '-')
	{
		negative = -1;
	}
	/* Exclude signed caracteres */
	if (*str == '-' || *str == '+')
	{
		++str;
	}
	/* For 0 to 9 values convert in int */
	while (*str && *str >= '0' && *str <= '9')
	{
		res = res * 10 + (*str - 48);
		++str;
	}

	/* Apply negative preparation to result en return final result */
	return (res * negative);
}
