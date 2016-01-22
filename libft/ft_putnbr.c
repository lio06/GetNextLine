/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lfargeas <lfargeas@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/30 23:50:02 by lfargeas          #+#    #+#             */
/*   Updated: 2015/12/06 03:06:34 by lfargeas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static void	ft_putnbrp(int n)
{
	if (n > 9 || n < -9)
	{
		ft_putnbrp(n / 10);
		ft_putnbrp(n % 10);
	}
	else
		ft_putchar(n < 0 ? '0' - n : '0' + n);
}

void		ft_putnbr(int n)
{
	if (n == -2147483648)
		ft_putstr("-2147483648");
	if (n == -2147483648)
		return ;
	if (n < 0)
	{
		ft_putchar('-');
	}
	ft_putnbrp(n);
}
