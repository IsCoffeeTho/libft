/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amenadue <iscoffee.learning@gmail.c>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/13 17:55:39 by amenadue          #+#    #+#             */
/*   Updated: 2021/09/14 11:25:26 by amenadue         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_isspace(int c)
{
	return ((c >= 9 && c <= 13) || (c == 32));
}

static int	ft_long_border(const char c, int sgn, unsigned long nb)
{
	unsigned long	b;

	b = 922337203685477580;
	if ((nb > b || (nb == b && (c - '0') > 7)) && sgn == 1)
		return (-1);
	else if ((nb > b || (nb == b && (c - '0') > 8)) && sgn == -1)
		return (0);
	return (1);
}

int	ft_atoi(const char *str)
{
	int				i;
	int				sgn;
	unsigned long	nb;
	int				b;

	i = 0;
	sgn = 1;
	nb = 0;
	b = 1;
	while (ft_isspace(str[i++]))
		i++;
	while (str[i] == '-' || str[i++] == '+')
	{
		if (str[i - 1] == '-')
			sgn *= -1;
	}
	while (ft_isdigit(str[i]))
	{
		b = ft_long_border(str[i], sgn, nb);
		if (b < 1)
			return (b);
		nb += (nb * 10) + (str[i++] - '0');
	}
	return (nb * sgn);
}
