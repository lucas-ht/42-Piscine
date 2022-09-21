char	*ft_strupcase(char *str)
{
	int		i;
	int		is_lowercase;

	i = 0;
	while (str[i])
	{
		is_lowercase = (str[i] >= 97 && str[i] <= 122);
		if (is_lowercase)
			str[i] -= 32;
		i++;
	}
	return (str);
}
