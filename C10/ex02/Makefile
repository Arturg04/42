# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: Arturg04 <artur.13.goncalves@gmail.com>    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/09/23 17:11:12 by Arturg04          #+#    #+#              #
#    Updated: 2023/09/23 19:01:45 by Arturg04         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CC = cc

SRC = *.c

PRE = srcs/

SRCS = $(addprefix $(PRE), $(SRC))

FLAGS = -Wextra -Werror -Wall

NAME = ft_tail

all: $(NAME)

$(NAME):
			$(CC) $(FLAGS) $(SRCS) -o $(NAME)
clean:
			rm -f *.o

fclean:
			rm -f $(NAME)
