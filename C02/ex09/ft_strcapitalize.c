int	is_numeric(char c)
{
	int		is_numeric;

	is_numeric = (c >= 48 && c <= 57);
	return (is_numeric);
}

char	*ft_strcapitalize(char *str)
{
	int		i;
	int		is_uppercase;
	int		is_lowercase;
	int		is_word_beginning;

	i = 0;
	is_word_beginning = 1;
	while (str[i])
	{
		is_uppercase = (str[i] >= 65 && str[i] <= 90);
		is_lowercase = (str[i] >= 97 && str[i] <= 122);
		if (is_word_beginning && is_lowercase)
			str[i] -= 32;
		if (!is_word_beginning && is_uppercase)
			str[i] += 32;
		is_word_beginning = 0;
		if (is_uppercase == 0 && is_lowercase == 0 && is_numeric(str[i]) == 0)
			is_word_beginning = 1;
		i++;
	}
	return (str);
}
