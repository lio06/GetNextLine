/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsplit.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lfargeas <lfargeas@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/30 23:40:49 by lfargeas          #+#    #+#             */
/*   Updated: 2015/12/06 02:47:10 by lfargeas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

static int	ft_cnt_parts(const char *s, char c)
{
	int cnt;
	int i;

	i = 0;
	cnt = 0;
	while (s[i] != '\0')
	{
		while (s[i] == c && s[i + 1] != '\0')
			i++;
		if (s[i] != c && (s[i + 1] == c || s[i + 1] == '\0'))
			cnt++;
		i++;
	}
	return (cnt);
}

static void	init_zero(unsigned int *i1, int *i2)
{
	*i1 = 0;
	*i2 = 0;
}

char		**ft_strsplit(char const *s, char c)
{
	char			**ret_val;
	unsigned int	w_nb;
	unsigned int	w_start;
	unsigned int	w_end;
	int				i;

	if (!(ret_val = (char**)malloc(sizeof(char*) * ft_cnt_parts(s, c) + 1)))
		return (NULL);
	init_zero(&w_nb, &i);
	while (s != NULL && s[i] != '\0')
	{
		while (s[i] == c)
			i++;
		w_start = i;
		w_end = 0;
		while (s[i] != c && s[i] != '\0')
		{
			i++;
			w_end = i;
		}
		if (w_end != '\0')
			ret_val[w_nb++] = ft_strsub(s, w_start, w_end - w_start);
	}
	ret_val[w_nb] = NULL;
	return (ret_val);
}
