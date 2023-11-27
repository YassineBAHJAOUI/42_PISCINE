/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_show_tab.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ybahjaou <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/18 11:33:22 by ybahjaou          #+#    #+#             */
/*   Updated: 2022/11/21 12:11:44 by ybahjaou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include "ft_stock_str.h"

int	ft_lenstr(char *s)
{
	int	i;

	i = 0;
	while (s[i] != '\0')
		i++;
	return (i);
}

void	ft_putchar(char c)
{
	write (1, &c, 1);
}

void	ft_putstr(char *s)
{
	write (1, s, ft_lenstr(s));
}

void	ft_putnbr(int num)
{
	if (num / 10 > 0)
	{
		ft_putnbr (num / 10);
		num %= 10;
	}
	ft_putchar (num + '0');
}

void	ft_show_tab(struct s_stock_str *par)
{
	int	i;

	i = 0;
	while (par[i].str != 0)
	{
		ft_putstr (par[i].str);
		ft_putstr ("\n");
		ft_putnbr (par[i].size);
		ft_putstr ("\n");
		ft_putstr (par[i].copy);
		ft_putstr ("\n");
		i++;
	}
}
