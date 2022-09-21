int	ft_str_is_lowercase(char *str)
{
	int	i;
	int	is_lowercase;

	i = 0;
	while (str[i])
	{
		is_lowercase = (str[i] >= 97 && str[i] <= 122);
		if (is_lowercase == 0)
			return (0);
		i++;
	}
	return (1);
}
