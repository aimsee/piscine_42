void	ft_swap(int *a, int *b)
{
	int	temp;

	temp = 0;
	temp = *b;
	*b = *a;
	*a = temp;
}
