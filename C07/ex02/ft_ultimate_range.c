#include <stdlib.h>

int	ft_ultimate_range(int **range, int min, int max)
{
	int	s;

	s = max - min;
	if (s <= 0)
	{
		*range = NULL;
		return (0);
	}
	*range = malloc(sizeof(int) * s);
	if (*range == 0)
		return (-1);
	while (min < max)
		*(*range)++ = min++;
	return (s);
}
