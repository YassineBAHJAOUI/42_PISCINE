/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ybahjaou <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/17 18:11:39 by ybahjaou          #+#    #+#             */
/*   Updated: 2022/11/17 18:35:01 by ybahjaou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

int	*ft_range(int min, int max)
{
	int		range;
	int		index;
	int		*d;

	if (min >= max)
		return (0);
	range = max - min;
	d = malloc(range * sizeof(int));
	if (!d)
		return (0);
	index = 0;
	while (index < range)
	{
		d[index] = min + index;
		index++;
	}
	return (d);
}
