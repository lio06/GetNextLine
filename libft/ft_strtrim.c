/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lfargeas <lfargeas@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/30 23:13:46 by lfargeas          #+#    #+#             */
/*   Updated: 2015/12/06 01:05:47 by lfargeas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s)
{
	int i;
	int start;
	int len;

	i = 0;
	while (ft_isspace(s[i]) == 1)
		i++;
	if (s[i] == '\0')
	{
		start = 0;
		len = 0;
	}
	else
	{
		start = i;
		i = ft_strlen(s) - 1;
		while (ft_isspace(s[i]) == 1)
			i--;
		len = ft_strlen(s);
		len -= start;
		len -= (i - ft_strlen(s) + 1) * -1;
	}
	return (ft_strsub(s, start, len));
}
