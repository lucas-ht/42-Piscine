/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lhutt <lhutt@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/12 00:04:03 by lhutt             #+#    #+#             */
/*   Updated: 2022/09/22 22:03:04 by lhutt            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_str_len(char *str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

char	*ft_strcpy(char *dest, char *src)
{
	int	i;

	i = 0;
	while (src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}

int	ft_strs_len(char **strs, int size, int sep_len)
{
	int	n;

	n = 0;
	while (--size >= 0)
		n += ft_str_len(strs[size]) + sep_len;
	n -= sep_len;
	return (n);
}

char	*ft_strjoin(int size, char **strs, char *sep)
{
	int		len;
	int		i;
	char	*str;

	if (!size)
		return (malloc(sizeof(char)));
	len = ft_strs_len(strs, size, ft_str_len(sep));
	str = malloc(sizeof(char) * (len + 1));
	if (!str)
		return (0);
	i = 0;
	while (i < size)
	{
		ft_strcpy(str, strs[i]);
		str += ft_str_len(strs[i]);
		if (i < size - 1)
		{
			ft_strcpy(str, sep);
			str += ft_str_len(sep);
		}
		i++;
	}
	*str = '\0';
	return (str);
}
