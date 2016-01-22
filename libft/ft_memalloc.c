/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memalloc.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lfargeas <lfargeas@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/30 20:55:48 by lfargeas          #+#    #+#             */
/*   Updated: 2015/12/06 03:16:35 by lfargeas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memalloc(size_t size)
{
	void *ret_value;

	if (!(ret_value = malloc(size)))
		return (0);
	ft_bzero(ret_value, size);
	return (ret_value);
}
