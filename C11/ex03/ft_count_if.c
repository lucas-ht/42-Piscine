/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_count_if.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lhutt <lhutt@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/21 05:59:18 by lhutt             #+#    #+#             */
/*   Updated: 2022/09/21 06:01:16 by lhutt            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

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