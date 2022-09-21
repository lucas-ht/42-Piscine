int	ft_str_is_alpha(char *str)
{
	int	i;
	int	is_uppercase;
	int	is_lowercase;

	i = 0;
	while (str[i])
	{
		is_uppercase = (str[i] >= 65 && str[i] <= 90);
		is_lowercase = (str[i] >= 97 && str[i] <= 122);
		if (is_uppercase == 0 && is_lowercase == 0)
			return (0);
		i++;
	}
	return (1);
}
