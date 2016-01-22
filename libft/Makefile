#******************************************************************************#
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: lfargeas <lfargeas@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2015/11/29 16:20:34 by lfargeas          #+#    #+#              #
#    Updated: 2015/12/07 03:37:54 by lfargeas         ###   ########.fr        #
#                                                                              #
#******************************************************************************#

NAME=libft.a

CFLAGS=-Wall -Wextra -Werror

RM=rm -f

SRC= *.c

OBJ=$(SRC:.c=.o)

$(NAME): $(OBJ)
	ar -rcs $(NAME) $(OBJ)

all: $(NAME)

clean:
	$(RM) $(OBJ)

fclean: clean
	$(RM) $(NAME)

re: fclean all

%.o:%.c
	gcc -c $(CFLAGS) $(SRC)