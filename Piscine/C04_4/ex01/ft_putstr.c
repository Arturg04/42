/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ade-pinh <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/01 11:27:20 by ade-pinh          #+#    #+#             */
/*   Updated: 2023/09/03 01:05:41 by ade-pinh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putstr(char *str)
{
	while (*str)
	{
		ft_putchar(*(str++));
	}
}
//
// int main(int argc, char **argv)
// {
//     if (argc < 1)
//     {
//         return (0);
//     }
//     ft_putstr(argv[1]);
//     return (0);
// }
