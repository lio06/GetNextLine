/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lfargeas <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/12/09 01:14:01 by lfargeas          #+#    #+#             */
/*   Updated: 2016/01/06 00:28:29 by lfargeas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GET_NEXT_LINE_H
# define GET_NEXT_LINE_H

#define BUFF_SIZE 100

typedef struct		s_data
{
	char *str;
	int fd_reading;
}					t_data;

int get_next_line(int const fd, char ** line);

#endif
