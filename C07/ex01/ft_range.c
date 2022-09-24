#include <stdlib.h>

int	*ft_range(int min, int max)
{
	int		n;
	int		i;
	int		*r;

	if (min >= max)
		return (0);
	n = max - min;
	r = malloc(n * sizeof(int));
	if (!r)
		return (0);
	i = 0;
	while (i < n)
	{
		r[i] = min + i;
		i++;
	}
	return (r);
}
