/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsub.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lfargeas <lfargeas@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/30 22:53:57 by lfargeas          #+#    #+#             */
/*   Updated: 2015/12/06 01:35:09 by lfargeas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strsub(char const *s, unsigned int start, size_t len)
{
	char	*ret_value;
	int		i;
	int		i2;

	i2 = 0;
	if (!(ret_value = ft_strnew(len)))
		return (ret_value);
	i = start;
	while ((unsigned int)i < (start + len))
	{
		ret_value[i2] = s[i];
		i++;
		i2++;
	}
	return (ret_value);
}
