#include <unistd.h>

void	ft_is_negative(int n)
{
	int		a;

	if (n >= 0)
		a = 80;
	else
		a = 78;
	write(1, &a, 1);
}
