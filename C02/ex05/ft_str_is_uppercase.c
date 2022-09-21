int	ft_str_is_uppercase(char *str)
{
	int	i;
	int	is_uppercase;

	i = 0;
	while (str[i])
	{
		is_uppercase = (str[i] >= 65 && str[i] <= 90);
		if (is_uppercase == 0)
			return (0);
		i++;
	}
	return (1);
}
