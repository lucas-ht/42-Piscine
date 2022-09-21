int	ft_str_is_numeric(char *str)
{
	int	i;
	int	is_numeric;

	i = 0;
	while (str[i])
	{
		is_numeric = (str[i] >= 48 && str[i] <= 57);
		if (is_numeric == 0)
			return (0);
		i++;
	}
	return (1);
}
