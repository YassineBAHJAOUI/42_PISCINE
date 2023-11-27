/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_uppercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ybahjaou <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/08 12:59:59 by ybahjaou          #+#    #+#             */
/*   Updated: 2022/11/08 13:02:47 by ybahjaou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_uppercase(char *str)
{
	int	i;
	int	ucase;

	i = 0;
	ucase = 1;
	while (str[i])
	{
		if (str[i] >= 'A' && str[i] <= 'Z')
			ucase = 1;
		else
			return (0);
		i++;
	}
	return (ucase);
}
