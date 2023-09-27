/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ade-pinh <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/25 03:31:31 by ade-pinh          #+#    #+#             */
/*   Updated: 2023/08/27 16:42:11 by ade-pinh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

void	_write(int i)
{
	char	c;

	c = i + 48;
	write(1, &c, 1);
}

void	ft_putnbr(int nb)
{
	int	resto;	
	int	n;

	if (nb == -2147483648)
	{
		write(1, "-2147483648", 11);
		return ;
	}
	if (nb < 0)
	{
		_write('-');
		nb = nb * -1;
	}
	if (nb < 10 && nb >= 0)
	{
		_write(nb);
		return ;
	}
	resto = nb % 10;
	n = nb / 10;
	ft_putnbr(n);
	_write(resto);
}
/*int   main(void)
{
        ft_putnbr(6464646);
	return (0);
}*/
