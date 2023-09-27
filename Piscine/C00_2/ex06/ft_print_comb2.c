/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ade-pinh <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/25 01:14:59 by ade-pinh          #+#    #+#             */
/*   Updated: 2023/09/08 13:28:27 by ade-pinh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	_writeall(int a, int b)
{
	a += 48;
	b += 48;
	write(1, &a, 1);
	write(1, &b, 1);
}

void	_separe(int a)
{
	int	n1;
	int	n2;

	n1 = a / 10;
	n2 = a % 10;
	_writeall(n1, n2);
}

void	ft_print_comb2(void)
{
	int	a;
	int	b;

	a = 0;
	while (a <= 98)
	{
		b = a + 1;
		while (b <= 99)
		{
			_separe(a);
			write(1, " ", 1);
			_separe(b);
			if (a != 98)
			{
				write(1, ", ", 2);
			}
			b++;
		}
		a++;
	}
}

int   main(void)
{
        ft_print_comb2();
	return (0);
}
