/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isspace.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lfargeas <lfargeas@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/26 13:04:42 by lfargeas          #+#    #+#             */
/*   Updated: 2015/12/06 03:16:07 by lfargeas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_isspace(int c)
{
	if (c != ' ' && c != '\n' && c != '\t' && c != '\v' && c != '\r')
		if (c != '\f')
			return (0);
	return (1);
}