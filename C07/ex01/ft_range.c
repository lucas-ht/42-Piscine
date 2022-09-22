/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lhutt <lhutt@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/11 03:25:32 by lhutt             #+#    #+#             */
/*   Updated: 2022/09/22 21:51:58 by lhutt            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	*ft_range(int min, int max)
{
	int		n;
	int		i;
	int		*r;

	if (min >= max)
		return (0);
	n = max - min;
	r = malloc(n * sizeof(int));
	if (!r)
		return (0);
	i = 0;
	while (i < n)
	{
		r[i] = min + i;
		i++;
	}
	return (r);
}
