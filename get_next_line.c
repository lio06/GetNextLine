/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lfargeas <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/12/09 01:18:26 by lfargeas          #+#    #+#             */
/*   Updated: 2015/12/09 04:54:25 by lfargeas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"
#include "libft/libft.h"
#include <unistd.h>

static void	init()
{
	static	unsigned int	line_pos = 0;
	static 	char			*last_time_carac = ft_memalloc(BUFF_SIZE);

}

int			get_next_line(int const fd, char **line)
{
	void					*buf;
	unsigned int			counter_max;
	int						i;
	int						i2;

	
	buf = ft_memalloc(BUFF_SIZE);
	i = 0;
	while (1)
	{
		i2 = 0;
		counter_max = read(fd, buf, BUFF_SIZE);
		while (i < counter_max)
		{
			*line[i] = buf[i2];
			i2++;
			i++;
		}
		if (*line[i] == 'n' || counter_max != BUFF_SIZE)
			break;
		}
	*line[i] = '\0';
	free (BUF);
	return (0);
}
