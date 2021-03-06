/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstpush.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lfargeas <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/12/09 23:39:17 by lfargeas          #+#    #+#             */
/*   Updated: 2015/12/10 00:05:55 by lfargeas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstpush(t_list **alst, t_list *new)
{
	t_list **tmp;

	if (alst == NULL)
	{
		*alst = new;
		return ;
	}
	tmp = alst;
	while (tmp->next != NULL)
	{
		tmp = alst;
	}
	tmp->next = new;
	return ;
}
