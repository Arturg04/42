/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ade-pinh <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/01 11:42:02 by ade-pinh          #+#    #+#             */
/*   Updated: 2023/09/03 01:03:02 by ade-pinh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
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
		ft_putchar('-');
		nb = nb * -1;
	}
	if (nb < 10 && nb >= 0)
	{
		ft_putchar(nb + 48);
		return ;
	}
	resto = nb % 10;
	n = nb / 10;
	ft_putnbr(n);
	ft_putchar(resto + 48);
}
/*
int main(int argc, char **argv)
{
    if (argc < 1)
    {
        return (0);
    }
    printf("%i", atoi(argv[1]));
    return (0);
}*/
