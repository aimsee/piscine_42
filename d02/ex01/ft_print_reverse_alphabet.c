
#  include <unistd.h>

int	ft_putchar(char c)

void	ft_print_reverse_alphabet(void)
{
	int letter;

	letter = 'z';
	while (letter >= 'a')
	{
		ft_purchar(letter);
		letter = letter - 1;
	}
}
