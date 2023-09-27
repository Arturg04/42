/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ade-pinh <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/05 00:33:26 by ade-pinh          #+#    #+#             */
/*   Updated: 2023/09/11 22:41:00 by ade-pinh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int	check(char *base)
{
	int	i;
	int	j;

	i = 0;
	while (base[i])
	{
		j = i + 1;
		while (base[j])
		{
			if (base[i] == base[j])
				return (0);
			j++;
		}
		if (base[i] == '+' || base[i] == '-' || base[i] < 32 || base[i] > 126)
			return (0);
		i++;
	}
	if (i < 2)
		return (0);
	return (i);
}

void	print_base_recursive(int nbr, char *base, int size)
{
	int	negative;

	negative = 1;
	if (nbr < 0)
		negative = -negative;
	if (nbr != 0)
		print_base_recursive((nbr / size), base, size);
	else
		return ;
	ft_putchar(base[nbr % size * negative]);
}

void	ft_putnbr_base(int nbr, char *base)
{
	int	size;

	size = check(base);
	if (size < 2)
		return ;
	if (nbr < 0)
		ft_putchar('-');
	print_base_recursive(nbr, base, size);
}

// #include <stdlib.h>

// int	main(int a, char **b)
// {
// 	if (a != 3)
// 		return (0);
// 	ft_putnbr_base(atoi(b[1]), b[2]);
// 	ft_putchar('\n');
// 	return (0);
// }
