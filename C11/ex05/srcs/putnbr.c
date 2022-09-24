#include <unistd.h>

void	ft_print_nb(int nb)
{
	int		i;
	char	t[20];

	i = 0;
	while (nb != 0)
	{
		t[i++] = '0' + nb % 10;
		nb /= 10;
	}
	while (i > 0)
		write(1, &t[--i], 1);
}

void	ft_putnbr(int nb)
{
	if (nb == -2147483648)
	{
		write(1, "-2147483648", 11);
		return ;
	}
	if (nb == 0)
	{
		write(1, "0", 1);
		return ;
	}
	if (nb < 0)
	{
		nb = -nb;
		write(1, "-", 1);
	}
	ft_print_nb(nb);
}
