/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lfargeas <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/12/09 01:18:26 by lfargeas          #+#    #+#             */
/*   Updated: 2015/12/22 13:46:15 by lfargeas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"
#include "libft/libft.h"
#include <unistd.h>
#include <stdio.h>

int	get_next_line(int const fd, char **line)
{
	static	char	*file;
	int				readret;
	char			*buffer;
	char			*temp1;

	if (!(buffer = ft_strnew(BUFF_SIZE)))
		return (-1);
	if ((readret = read(fd, buffer, BUFF_SIZE)) != 0)
	{
		file = ft_strnew(readret);
		ft_strncpy(file, buffer, readret);
	}
	while ((readret = read(fd, buffer, BUFF_SIZE)) != 0)
	{
		temp1 = file;
		ft_strncpy(buffer, buffer, readret);
		ft_bzero((char*)&buffer[readret], BUFF_SIZE - readret);
		file = ft_strjoin(temp1, buffer);
		ft_memdel((void**)&temp1);
	}
	ft_putstr(file);
return (1);
}
