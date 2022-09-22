/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_map.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lhutt <lhutt@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/21 05:53:33 by lhutt             #+#    #+#             */
/*   Updated: 2022/09/22 14:04:05 by lhutt            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	*ft_map(int *tab, int length, int (*f)(int))
{
	int	*a;
	int	i;

	a = malloc(sizeof(int) * length);
	i = 0;
	while (i < length)
	{
		a[i] = f(tab[i]);
		i++;
	}
	return (a);
}
