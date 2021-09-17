/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amenadue <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/16 11:59:21 by amenadue          #+#    #+#             */
/*   Updated: 2021/09/16 11:59:21 by amenadue         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	unsigned char	*s1_str;
	unsigned char	*s2_str;

	if (n <= 0)
		return (0);
	s1_str = (unsigned char *) s1;
	s2_str = (unsigned char *) s2;
	while (*s1_str == *s2_str && n - 1 > 0)
	{
		s1_str++;
		s2_str++;
		n--;
	}
	return (*s1_str - *s2_str);
}
