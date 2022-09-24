#include <unistd.h>

extern void	ft_putnbr(int nb);

void	add(int a, int b)
{
	ft_putnbr(a + b);
	write(1, "\n", 1);
}

void	rem(int a, int b)
{
	ft_putnbr(a - b);
	write(1, "\n", 1);
}

void	div(int a, int b)
{
	if (b == 0)
		write(1, "Stop : division by zero", 23);
	else
		ft_putnbr(a / b);
	write(1, "\n", 1);
}

void	mul(int a, int b)
{
	ft_putnbr(a * b);
}

void	mod(int a, int b)
{
	if (b == 0)
		write(1, "Stop : modulo by zero\n", 21);
	else
		ft_putnbr(a % b);
	write(1, "\n", 1);
}
