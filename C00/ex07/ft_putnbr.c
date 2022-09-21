#include <unistd.h>

void	print_number(int i)
{
	char	a;
	char	b;

	a = '0';
	b = a + i;
	write(1, &b, 1);
}

void	ft_putnbr(int nb)
{
	int	rm10;
	int	dvsr;
	int	quot;

	if (nb < 0)
	{
		nb = -nb;
		write(1, "-", 1);
	}
	rm10 = nb / 10;
	dvsr = 1;
	while (dvsr <= rm10)
		dvsr *= 10;
	while (dvsr)
	{
		quot = nb / dvsr;
		print_number(quot);
		nb %= dvsr;
		dvsr /= 10;
	}
}
