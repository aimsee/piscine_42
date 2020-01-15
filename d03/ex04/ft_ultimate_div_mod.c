void	ft_ultimate_div_mod(int *a, int *b)
{
	int	temp;
	
	temp = 0;
	temp = *a / *b;
	*b = *a % *b;
	*a = temp;
}
