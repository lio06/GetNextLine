/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lfargeas <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/12/09 03:19:19 by lfargeas          #+#    #+#             */
/*   Updated: 2016/01/06 01:16:29 by lfargeas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"
#include "libft/libft.h"
#include <stdio.h>
#include <fcntl.h>
#include <stdlib.h>
#include <unistd.h>

int main ()
{
	int nbr;
	char *line;
	line = NULL;
	int fd = open("lol.getnextline", O_RDWR	);
	while ((nbr = get_next_line(fd, &line)))
	{
		ft_putnbr(nbr);
		ft_putendl(line);
	}
	ft_putnbr(nbr);
	ft_putstr(line);
	close(fd);
	return (0);
}
