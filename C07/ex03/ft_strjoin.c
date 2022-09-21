#include <stdlib.h>

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

char	*ft_strcat(char *dest, char *src)
{
	int				i;
	unsigned int	dest_lenght;

	dest_lenght = ft_strlen(dest);
	i = 0;
	while (src[i])
	{
		dest[dest_lenght + i] = src[i];
		i++;
	}
	dest[dest_lenght + i] = '\0';
	return (dest);
}

char	*ft_strjoin(int size, char **strs, char *sep)
{
	char	*str;
	int		i;
	int		len;

	if (size <= 0)
	{
		str = malloc(1);
		str[0] = '\0';
	}
	i = 0;
	len = 0;
	while (i < size)
		len += ft_strlen(strs[i++]) + ft_strlen(sep);
	str = malloc(len - ft_strlen(sep) + 1);
	i = 0;
	while (i < size)
	{
		ft_strcat(str, strs[i++]);
		if (i < size)
			ft_strcat(str, sep);
	}
	return (str);
}
