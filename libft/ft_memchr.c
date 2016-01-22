/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lfargeas <lfargeas@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/28 00:57:57 by lfargeas          #+#    #+#             */
/*   Updated: 2015/12/07 03:49:06 by lfargeas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static char		*internal_memchr(const char *s, int c, size_t n)
{
	int i;

	i = 0;
	while (i < (int)n)
	{
		if (s[i] == (char)c)
			return ((char*)&s[i]);
		i++;
	}
	return (NULL);
}

void			*ft_memchr(const void *s, int c, size_t n)
{
	return ((void*)internal_memchr(s, c, n));
}
