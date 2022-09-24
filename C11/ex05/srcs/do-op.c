#include <unistd.h>

extern int	add(int a, int b);
extern int	rem(int a, int b);
extern int	div(int a, int b);
extern int	mul(int a, int b);
extern int	mod(int a, int b);
extern int	ft_atoi(char *str);
extern void	ft_putnbr(int nb);

void	init(int (*op[5])(int, int))
{
	op[0] = add;
	op[1] = rem;
	op[2] = div;
	op[3] = mul;
	op[4] = mod;
}

int	main(int ac, char **av)
{
	int	a;
	int	b;
	int	(*op[5])(int, int);

	if (ac != 4)
		return (1);
	a = ft_atoi(av[1]);
	b = ft_atoi(av[3]);
	init(op);
	if (*av[2] == '+')
		op[0](a, b);
	else if (*av[2] == '-')
		op[1](a, b);
	else if (*av[2] == '/')
		op[2](a, b);
	else if (*av[2] == '*')
		op[3](a, b);
	else if (*av[2] == '%')
		op[4](a, b);
	else
	{
		ft_putnbr(0);
		write(1, "\n", 1);
	}
}
