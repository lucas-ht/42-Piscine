#include <unistd.h>

void	ft_print_reverse_alphabet(void)
{
	int		a;

	a = 122;
	while (a >= 97)
	{
		write(1, &a, 1);
		a--;
	}
}
