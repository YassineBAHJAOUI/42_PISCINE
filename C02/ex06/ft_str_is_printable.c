/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_printable.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ybahjaou <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/08 13:05:09 by ybahjaou          #+#    #+#             */
/*   Updated: 2022/11/08 13:05:54 by ybahjaou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_printable(char *str)
{
	int	i;
	int	print;

	i = 0;
	print = 1;
	while (str[i])
	{
		if (str[i] >= ' ' && str[i] <= '~')
			print = 1;
		else
			return (0);
		i++;
	}
	return (print);
}
