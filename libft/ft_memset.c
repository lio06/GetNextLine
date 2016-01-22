/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lfargeas <lfargeas@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/28 00:12:09 by lfargeas          #+#    #+#             */
/*   Updated: 2015/12/07 03:55:50 by lfargeas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *b, int c, size_t len)
{
	int		i;
	char	*tmp_point;

	i = 0;
	tmp_point = (char*)b;
	while (i < (int)len)
	{
		tmp_point[i] = c;
		i++;
	}
	return ((void*)tmp_point);
}
