#include <stdlib.h>
#include <unistd.h>

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

int	ft_atoi_base(char *str, char *base)
{
	int		j;
	int		n;
	int		sign;
	int		base_len;

	n = 0;
	sign = 1;
	base_len = is_base_valid(base);
	if (base_len <= 1)
		return (0);
	while (*str && ((*str >= 9 && *str <= 13) || *str == 32))
		str++;
	while (*str && (*str == 43 || *str == 45))
	{
		if (*str++ == 45)
			sign *= -1;
	}
	j = nb_base(*str++, base);
	while (j != -1)
	{
		n = (n * base_len) + j;
		j = nb_base(*str++, base);
	}
	return (n *= sign);
}

char	*ft_convert_base_str(int n, int str_len, char *base_to, int base_len)
{
	char	*str;

	str = malloc(sizeof(char) * (str_len + 2));
	if (n < 0)
	{
		*str = '-';
		n *= -1;
	}
	str += str_len - 10;
	while (n)
	{
		*str = base_to[n % base_len - 1];
		str--;
		n /= base_len;
	}
	str[str_len + 1] = 0;
	return (++str);
}

char	*ft_convert_base(char *nbr, char *base_from, char *base_to)
{
	int		base_len;
	int		str_len;
	int		n;

	if (!is_base_valid(base_from) || !is_base_valid(base_to))
		return (0);
	base_len = 0;
	while (*base_to++)
		base_len++;
	base_to -= base_len;
	str_len = 1;
	n = ft_atoi_base(nbr, base_from);
	if (n < 0)
		n *= -1;
	while (n >= base_len)
	{
		n /= base_len;
		str_len++;
	}
	n = ft_atoi_base(nbr, base_from);
	if (n < 0)
		str_len++;
	return (ft_convert_base_str(n, str_len, base_to, base_len));
}
