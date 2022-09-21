extern void	ft_putchar(char c);

void	disp_firstline(int xmax)
{
	int	x;

	x = 0;
	while (x < xmax)
	{
		x++;
		if (x == 1 || x == xmax)
		{
			ft_putchar('o');
		}
		else
		{
			ft_putchar('-');
		}
	}
}

void	disp_midline(int xmax)
{
	int	x;

	x = 0;
	while (x < xmax)
	{
		x++;
		if (x == 1 || x == xmax)
		{
			ft_putchar('|');
		}
		else
		{
			ft_putchar(' ');
		}
	}
}

void	disp_lastline(int xmax)
{
	int	x;

	x = 0;
	while (x < xmax)
	{
		x++;
		if (x == 1 || x == xmax)
		{
			ft_putchar('o');
		}
		else
		{
			ft_putchar('-');
		}
	}
}

void	rush(int x, int y)
{
	int	l;

	l = 1;
	while (l <= y)
	{
		if (l == 1)
		{
			disp_firstline(x);
		}
		if (l != 1 && l == y)
		{
			disp_lastline(x);
		}
		if (l != 1 && l != y)
		{
			disp_midline(x);
		}
		if (l < y)
		{
			ft_putchar('\n');
		}
		l++;
	}
	ft_putchar('\n');
}
