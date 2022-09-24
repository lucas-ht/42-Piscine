int	ft_count_if(char **tab, int length, int (*f)(char*))
{
	int	i;
	int	c;

	i = 0;
	c = 0;
	while (i < length)
	{
		if (f(tab[i]) != 0)
			c++;
		i++;
	}
	return (c);
}
