/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lfargeas <lfargeas@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/25 18:29:42 by lfargeas          #+#    #+#             */
/*   Updated: 2015/12/07 03:48:44 by lfargeas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static void	incrementvar(int *i, int *i2)
{
	*i = *i + 1;
	*i2 = *i2 + 1;
}

char		*ft_strstr(const char *s1, const char *s2)
{
	int pos_s2;
	int pos_s1;
	int save_pos_s1;

	pos_s1 = 0;
	if (s2[0] == '\0')
		return ((char*)s1);
	while (pos_s1 <= (int)ft_strlen(s1))
	{
		pos_s2 = 0;
		if (s1[pos_s1] == s2[pos_s2])
		{
			save_pos_s1 = pos_s1;
			while (s1[pos_s1] == s2[pos_s2] && pos_s1 < (int)ft_strlen(s1))
			{
				incrementvar(&pos_s1, &pos_s2);
			}
			if (s2[pos_s2] == '\0')
				return ((char*)&s1[save_pos_s1]);
			pos_s1 = save_pos_s1;
			pos_s2 = 0;
		}
		pos_s1++;
	}
	return (NULL);
}
