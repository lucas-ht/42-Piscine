char	*ft_strlowcase(char *str)
{
	int		i;
	int		is_uppercase;

	i = 0;
	while (str[i])
	{
		is_uppercase = (str[i] >= 65 && str[i] <= 90);
		if (is_uppercase)
			str[i] += 32;
		i++;
	}
	return (str);
}
