/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lfargeas <lfargeas@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/28 00:52:05 by lfargeas          #+#    #+#             */
/*   Updated: 2015/12/06 03:11:53 by lfargeas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	internal_strcmp(unsigned char *s1, unsigned char *s2, size_t n)
{
	int i;

	i = 0;
	if (n == 0)
		return (0);
	while (s1[i] == s2[i] && i < (int)n - 1)
	{
		i++;
	}
	return ((int)s1[i] - s2[i]);
}

int			ft_memcmp(const void *s1, const void *s2, size_t n)
{
	return (internal_strcmp((unsigned char*)s1, (unsigned char*)s2, n));
}
