/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_map.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ybahjaou <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/23 12:01:40 by ybahjaou          #+#    #+#             */
/*   Updated: 2022/11/23 12:02:46 by ybahjaou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	*ft_map(int *tab, int length, int (*f)(int))
{
	int	*ret;
	int	i;

	ret = malloc(length * sizeof(int));
	if (length < 1 || !ret)
		return (NULL);
	i = -1;
	while (++i < length)
		ret[i] = f(tab[i]);
	return (ret);
}
