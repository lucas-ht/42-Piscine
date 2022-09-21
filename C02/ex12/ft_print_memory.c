#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_print_address(unsigned long addr)
{
	char	buffer[16];
	char	*base;
	int		i;

	base = "0123456789abcdef";
	i = 0;
	while (addr)
	{
		buffer[i] = (base[addr % 16]);
		addr = addr / 16;
		i++;
	}
	while (i < 16)
	{
		buffer[i] = '0';
		i++;
	}
	while (i > 0)
	{
		ft_putchar(buffer[--i]);
	}
	write(1, ": ", 2);
}

void	ft_print_values(unsigned char *addr)
{
	int		i;
	char	*base;

	base = "0123456789abcdef";
	i = 0;
	while (i < 16)
	{
		ft_putchar(base[addr[i] / 16]);
		ft_putchar(base[addr[i] % 16]);
		if (i % 2)
			write(1, " ", 1);
		i++;
	}
	while (i < 16)
	{
		write(1, "  ", 2);
		if (i % 2)
			write(1, " ", 1);
		i++;
	}
}

void	ft_print_char(unsigned long *addr)
{
	char	*buffer;
	int		i;

	buffer = (char *) addr;
	i = 0;
	while (i < 16)
	{
		if (buffer[i] >= 32 && buffer[i] <= 126)
			write(1, &buffer[i], 1);
		else
			write(1, ".", 1);
		i++;
	}
}

void	*ft_print_memory(void *addr, unsigned int size)
{
	unsigned long	*addr_ptr;
	unsigned int	offset;

	addr_ptr = (unsigned long *) addr;
	offset = 0;
	while (offset < size)
	{
		ft_print_address((unsigned long) addr_ptr + offset);
		ft_print_values((unsigned char *) addr_ptr + offset);
		ft_print_char(addr_ptr + offset);
		offset += 16;
		write(1, '\n', 1);
	}
	return (addr);
}
