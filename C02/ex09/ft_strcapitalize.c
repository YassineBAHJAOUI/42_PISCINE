/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ybahjaou <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/08 21:01:06 by ybahjaou          #+#    #+#             */
/*   Updated: 2022/11/08 21:02:23 by ybahjaou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_isdigit(char c)
{
	return (c >= '0' && c <= '9');
}

int	ft_islower(char c)
{
	return (c >= 'a' && c <= 'z');
}

int	ft_isupper(char c)
{
	return (c >= 'A' && c <= 'Z');
}

char	*ft_strcapitalize(char *str)
{
	char	*s;

	s = str;
	while (*s)
	{
		if (ft_isdigit(*s) || ft_islower(*s) || ft_isupper(*s))
		{
			if (ft_isdigit(*s))
				while (ft_isdigit(s[1]))
					s++;
			else if (ft_islower(*s))
				*s -= 32;
			while (ft_islower(*(++s)) || ft_isupper(*s))
				if (ft_isupper(*s))
					*s += 32;
		}
		else
			s++;
	}
	return (str);
}
