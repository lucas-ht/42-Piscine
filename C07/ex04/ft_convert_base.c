#include <stdlib.h>

extern void	ft_convert_to_base(int nbr, char *base, char *nbrf);
extern int	nb_len(int nbr, char *base);

int	is_base_valid(char *base)
{
	int	i;
	int	j;

	i = 0;
	if (base[0] == '\0' || base[1] == '\0')
		return (0);
	while (base[i] != '\0')
	{
		if (base[i] <= 32 || base[i] == 127 || base[i] == 43 || base[i] == 45)
			return (0);
		j = i + 1;
		while (base[j] != '\0')
		{
			if (base[i] == base[j])
				return (0);
			j++;
		}
		i++;
	}
	return (i);
}

int	nb_base(char str, char *base)
{
	int	n;

	n = 0;
	while (base[n])
	{
		if (str == base[n])
			return (n);
		n++;
	}
	return (-1);
}

int	ft_atoi_space_sign(char *str, int *ptr_i)
{
	int	sign;
	int	i;

	i = 0;
	while ((str[i] >= 9 && str[i] <= 13) || str[i] == 32)
		i++;
	sign = 1;
	while (str[i] && (str[i] == 43 || str[i] == 45))
	{
		if (str[i] == 45)
			sign *= -1;
		i++;
	}
	*ptr_i = i;
	return (sign);
}

int	ft_atoi_base(char *str, char *base)
{
	int		i;
	int		j;
	int		n;
	int		sign;
	int		base_len;

	n = 0;
	i = 0;
	base_len = is_base_valid(base);
	if (base_len >= 2)
	{
		sign = ft_atoi_space_sign(str, &i);
		j = nb_base(str[i], base);
		while (j != -1)
		{
			n = (n * base_len) + j;
			i++;
			j = nb_base(str[i], base);
		}
		return (n *= sign);
	}
	return (0);
}

char	*ft_convert_base(char *nbr, char *base_from, char *base_to)
{
	char	*str;
	int		n;
	int		len;

	if (is_base_valid(base_to) == 0 || is_base_valid(base_from) == 0)
		return (0);
	n = ft_atoi_base(nbr, base_from);
	len = nb_len(n, base_to);
	str = (char *)malloc(sizeof(char) * (len + 1));
	if (!str)
		return (0);
	ft_convert_to_base(n, base_to, str);
	str[len] = '\0';
	return (str);
}
