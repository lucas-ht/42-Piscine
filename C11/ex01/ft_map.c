#include <stdlib.h>

int	*ft_map(int *tab, int length, int (*f)(int))
{
	int	*a;
	int	i;

	a = malloc(sizeof(int) * length);
	i = 0;
	while (i < length)
	{
		a[i] = f(tab[i]);
		i++;
	}
	return (a);
}
