int	ft_any(char **tab, int (*f)(char*))
{
	while (*tab)
	{
		if (f(*tab++) != 0)
			return (1);
	}
	return (0);
}
