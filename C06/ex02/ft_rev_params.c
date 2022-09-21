#include <unistd.h>

int	main(int argc, char *argv[])
{
	int	n;

	n = argc;
	while (--n > 0)
	{
		while (*argv[n])
			write(1, argv[n]++, 1);
		write(1, "\n", 1);
	}
	return (0);
}
