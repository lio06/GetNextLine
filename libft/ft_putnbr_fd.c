/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lfargeas <lfargeas@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/12/01 00:19:42 by lfargeas          #+#    #+#             */
/*   Updated: 2015/12/06 03:05:32 by lfargeas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static void	ft_putnbrp(int n, int fd)
{
	if (n > 9 || n < -9)
	{
		ft_putnbrp(n / 10, fd);
		ft_putnbrp(n % 10, fd);
	}
	else
		ft_putchar_fd(n < 0 ? '0' - n : '0' + n, fd);
}

void		ft_putnbr_fd(int n, int fd)
{
	if (n == -2147483648)
		ft_putstr_fd("-2147483648", fd);
	if (n == -2147483648)
		return ;
	if (n < 0)
	{
		ft_putchar_fd('-', fd);
	}
	ft_putnbrp(n, fd);
}
