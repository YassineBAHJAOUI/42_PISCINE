/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ybahjaou <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/17 18:51:51 by ybahjaou          #+#    #+#             */
/*   Updated: 2022/11/17 18:57:57 by ybahjaou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

int	ft_ultimate_range(int **range, int min, int max)
{
	int		size;
	int		index;
	int		*d;

	if (min >= max)
	{
		*range = 0;
		return (0);
	}
	size = max - min;
	d = malloc(size * sizeof(int));
	if (!d)
	{
		*range = 0;
		return (-1);
	}
	*range = d;
	index = 0;
	while (index < size)
	{
		d[index] = min + index;
		index++;
	}
	return (size);
}
