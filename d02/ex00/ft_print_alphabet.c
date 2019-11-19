
# include <unistd.h>

int	ft_putchar(char c)

void	ft_print_alpabet(void)
{
	int letter;

	letter = 'a';
	while (letter <= 'z')
	{
		ft_putchar(letter);
		letter = letter + 1;
	}
}
