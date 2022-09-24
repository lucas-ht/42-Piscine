#include <stdlib.h>

int	ft_ultimate_range(int **range, int min, int max)
{
	int		n;
	int		i;
	int		*r;

	if (min >= max)
	{
		*range = 0;
		return (0);
	}
	n = max - min;
	r = malloc(n * sizeof(int));
	if (!r)
	{
		*range = 0;
		return (-1);
	}
	*range = r;
	i = 0;
	while (i < n)
	{
		r[i] = min + i;
		i++;
	}
	return (n);
}
