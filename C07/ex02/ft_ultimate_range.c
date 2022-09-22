/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lhutt <lhutt@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/15 23:44:15 by lhutt             #+#    #+#             */
/*   Updated: 2022/09/22 21:54:41 by lhutt            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_ultimate_range(int **range, int min, int max)
{
	int		n;
	int		i;
	int		*r;

	if (min >= max)
	{
		*range = 0;
		return (0);
	}
	n = max - min;
	r = malloc(n * sizeof(int));
	if (!r)
	{
		*range = 0;
		return (-1);
	}
	*range = r;
	i = 0;
	while (i < n)
	{
		r[i] = min + i;
		i++;
	}
	return (n);
}
