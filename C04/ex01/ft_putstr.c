#include <unistd.h>

void	ft_putstr(char *str)
{
	while (str[0])
		write(1, &str++[0], 1);
}
