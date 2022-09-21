#include <unistd.h>

void	print_numbers(int i, int j, int k)
{
	char	a;
	char	b;

	a = '0';
	b = a + i;
	write(1, &b, 1);
	b = a + j;
	write(1, &b, 1);
	b = a + k;
	write(1, &b, 1);
	b = ',';
	write(1, &b, 1);
	b = ' ';
	write(1, &b, 1);
}

void	ft_print_comb(void)
{
	int		i;
	int		j;
	int		k;

	i = 0;
	while (i < 10)
	{
		j = i + 1;
		while (j < 10)
		{
			k = j + 1;
			while (k < 10)
			{
				print_numbers(i, j, k);
				k++;
			}
			j++;
		}
		i++;
	}
}
