/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_lowercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ybahjaou <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/08 12:21:05 by ybahjaou          #+#    #+#             */
/*   Updated: 2022/11/08 12:58:45 by ybahjaou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_lowercase(char *str)
{
	int	i;
	int	lcase;

	i = 0;
	lcase = 1;
	while (str[i])
	{
		if (str[i] >= 'a' && str[i] <= 'z')
			lcase = 1;
		else
			return (0);
		i++;
	}
	return (lcase);
}
