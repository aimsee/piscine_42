
# include <unistd.h>

int	ft_putchar(char c)

void	ft_print_numbers(void)
{
	int numbers;

	numbers = 0;
	while (numbers <= 9)
	{
		ft_putchar(numbers);
		numbers = numbers +1;
	}
}
