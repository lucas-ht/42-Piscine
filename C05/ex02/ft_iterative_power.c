int	ft_iterative_power(int nb, int power)
{
	int	n;

	n = nb;
	if (power == 0)
		return (1);
	else if (power < 0)
		return (0);
	else if (nb == 0 && power == 0)
		return (1);
	while (--power > 0)
		n *= nb;
	return (n);
}
