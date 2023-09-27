/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_reverse_alphabet.c                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ade-pinh <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/24 22:58:04 by ade-pinh          #+#    #+#             */
/*   Updated: 2023/08/27 01:13:21 by ade-pinh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print_reverse_alphabet(void)
{
	int	c;

	c = 122;
	while (c > 96)
	{
		write(1, &c, 1);
		c--;
	}
}
/*
int   main(void)
{
        ft_print_reverse_alphabet();
	return (0);
}*/
