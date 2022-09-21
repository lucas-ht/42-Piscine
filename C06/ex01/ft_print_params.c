#include <unistd.h>

int	main(int argc, char *argv[])
{
	int	n;

	n = 0;
	while (++n < argc)
	{
		write(1, *(argv + n), sizeof(*(argv + n)));
		write(1, "\n", 1);
	}
	return (0);
}
