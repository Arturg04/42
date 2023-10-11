# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ade-pinh <ade-pinh@student.42porto.com>    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/10/11 22:20:11 by ade-pinh          #+#    #+#              #
#    Updated: 2023/10/11 22:36:05 by ade-pinh         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libftprintf.a
CC = cc
CFLAGS = -Wall -Werror -Wextra
AR = ar rcs
RM = rm -f
HDR = -I.

SRC_FILES = ft_print_char ft_printf ft_print_hex ft_print_mem ft_print_num ft_print_putstr
SRC = $(addsuffix .c, $(SRC_FILES))
OBJ = $(addsuffix .o, $(SRC_FILES))

all : $(NAME)

$(NAME) : $(OBJ)
	make -C libft
	cp libft/libft.a .
	mv libft.a $(NAME)
	$(AR) $(NAME) $(OBJ)

%.o : %.c
	$(CC) $(CFLAGS) $(HDR) -c $< -o $@

clean :
	$(RM) -rf $(OBJ)
	make clean -C libft

fclean : clean
	$(RM) $(NAME)
	$(RM) libft/libft.a

re : fclean all

.PHONY: all clean fclean re
