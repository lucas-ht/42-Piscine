#include <stdlib.h>

int	is_char_in_charset(char c, char *charset)
{
	while (*charset)
	{
		if (c == *charset++)
			return (1);
	}
	return (0);
}

int	count_word(char *str, char *charset)
{
	int	c;

	c = 0;
	while (*str)
	{
		while (*str && is_char_in_charset(*str, charset))
			str++;
		if (*str)
			c++;
		while (*str && !is_char_in_charset(*str, charset))
			str++;
	}
	return (c);
}

int	str_len(char *str, char *charset)
{
	int	i;

	i = 0;
	while (str[i] && !is_char_in_charset(str[i], charset))
		i++;
	return (i);
}

char	*ft_split_word(char *str, char *charset)
{
	int		len;
	int		i;
	char	*word;

	i = 0;
	len = str_len(str, charset);
	word = malloc(sizeof(char) * (len + 1));
	while (i < len)
	{
		word[i] = str[i];
		i++;
	}
	word[i] = 0;
	return (word);
}

char	**ft_split(char *str, char *charset)
{
	char	**strs;
	int		i;

	i = 0;
	strs = malloc(sizeof(char *) * (count_word(str, charset) + 1));
	while (*str)
	{
		while (*str && is_char_in_charset(*str, charset))
			str++;
		if (*str)
			strs[i++] = ft_split_word(str, charset);
		while (*str && !is_char_in_charset(*str, charset))
			str++;
	}
	strs[i] = 0;
	return (strs);
}
