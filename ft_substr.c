/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amenadue <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/16 15:00:28 by amenadue          #+#    #+#             */
/*   Updated: 2021/09/17 15:22:56 by amenadue         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*new;
	size_t	i;
	size_t	slen;

	i = 0;
	slen = ft_strlen(s);
	new = (char *) malloc(slen - start);
	if (!new)
		return (NULL);
	while (start < slen && i < len)
		new[i++] = s[start++];
	new[i] = '\0';
	return (new);
}
