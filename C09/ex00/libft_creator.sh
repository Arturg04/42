# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    libft_creator.sh                                   :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: Arturg04 <artur.13.goncalves@gmail.com>    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/09/23 14:42:07 by Arturg04          #+#    #+#              #
#    Updated: 2023/09/23 15:00:58 by Arturg04         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

rm -f libft.a
cc -Wextra -Werror -Wall -c ft_putchar.c ft_putstr.c ft_strcmp.c ft_strlen.c ft_swap.c
ar rcs libft.a ft_putchar.o ft_putstr.o ft_strcmp.o ft_strlen.o ft_swap.o
rm -f ft_putchar.o ft_putstr.o ft_strcmp.o ft_strlen.o ft_swap.o
