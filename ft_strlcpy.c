/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amenadue <iscoffee.learning@gmail.c>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/13 17:55:39 by amenadue          #+#    #+#             */
/*   Updated: 2021/09/14 11:26:48 by amenadue         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *dst, const char *src, size_t dstsize)
{
	const size_t	slen = ft_strlen(src) + 1;

	if (slen < dstsize)
		ft_memcpy(dst, src, slen);
	else if (dstsize != 0)
	{
		dstsize--;
		ft_memcpy(dst, src, dstsize);
		dst[dstsize] = '\0';
	}
	return (slen - 1);
}
