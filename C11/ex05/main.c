/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ybahjaou <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/23 10:19:21 by ybahjaou          #+#    #+#             */
/*   Updated: 2022/11/23 10:50:59 by ybahjaou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft.h"

t_op	ft_get_index(char *str)
{
	if (!*str || str[1])
		return (dop_null);
	if (*str == '+')
		return (dop_sum);
	if (*str == '-')
		return (dop_sub);
	if (*str == '/')
		return (dop_div);
	if (*str == '*')
		return (dop_mul);
	if (*str == '%')
		return (dop_mod);
	return (dop_null);
}

int	main(int argc, char **argv)
{
	void	(*do_op[5])(int, int);
	t_op	dop;

	do_op[dop_sum] = &ft_sum;
	do_op[dop_sub] = &ft_sub;
	do_op[dop_div] = &ft_div;
	do_op[dop_mul] = &ft_mul;
	do_op[dop_mod] = &ft_mod;
	if (argc == 4)
	{
		dop = ft_get_index(argv[2]);
		if (dop == dop_null)
			ft_putnbr(0);
		else
			do_op[dop](ft_atoi(argv[1]), ft_atoi(argv[3]));
		ft_putchar('\n');
	}
	return (0);
}
