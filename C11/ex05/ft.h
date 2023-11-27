/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft.h                                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ybahjaou <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/23 10:24:38 by ybahjaou          #+#    #+#             */
/*   Updated: 2022/11/23 10:49:21 by ybahjaou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_H
# define FT_H

typedef enum e_op
{
	dop_sum,
	dop_sub,
	dop_div,
	dop_mul,
	dop_mod,
	dop_null,
}	t_op;

void	ft_sum(int a, int b);

void	ft_sub(int a, int b);

void	ft_div(int a, int b);

void	ft_mul(int a, int b);

void	ft_mod(int a, int b);

int		ft_atoi(char *str);

void	ft_putchar(char c);

void	ft_putnbr(int nb);

void	ft_putstr(char *str);

int		ft_strlen(char *str);
#endif
