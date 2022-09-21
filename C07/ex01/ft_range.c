#include <stdlib.h>

int	*ft_range(int min, int max)
{
	int	*n;
	int	s;

	s = max - min;
	if (s <= 0)
		return (0);
	n = malloc(sizeof(int) * s);
	while (min < max)
		*n++ = min++;
	return (n - s);
}
