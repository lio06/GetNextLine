/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lfargeas <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/12/09 03:19:19 by lfargeas          #+#    #+#             */
/*   Updated: 2015/12/19 12:55:01 by lfargeas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"
#include "libft/libft.h"
#include <stdio.h>
#include <fcntl.h>

int main ()
{
	char **line;
	int fd = open("lol.getnextline", O_RDWR	);
	get_next_line(fd, line);
	return (0);
}
