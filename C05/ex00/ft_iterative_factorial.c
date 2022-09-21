int	ft_iterative_factorial(int nb)
{
	int	n;

	n = nb;
	if (nb == 0)
		return (1);
	else if (nb < 0)
		return (0);
	else if (nb == 1)
		return (1);
	while (--nb > 0)
		n *= nb;
	return (n);
}
