int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

int	nb_len(int nbr, char *base)
{
	int		base_len;
	int		len;
	long	n;

	base_len = ft_strlen(base);
	len = 0;
	if (nbr < 0)
	{
		n = nbr * -1;
		len++;
	}
	else
		n = nbr;
	while (n >= base_len)
	{
		n /= base_len;
		len++;
	}
	len++;
	return (len);
}

void	ft_convert_to_base(int n, char *base, char *str)
{
	int		base_len;
	long	m;
	int		i;
	int		len;

	base_len = ft_strlen(base);
	len = nb_len(n, base);
	m = n;
	i = 0;
	if (m < 0)
	{
		str[0] = '-';
		m *= -1;
		i++;
	}
	len--;
	while (m >= base_len)
	{
		str[len] = base[m % base_len];
		m /= base_len;
		len--;
	}
	if (m < base_len)
		str[i] = base[m];
}
