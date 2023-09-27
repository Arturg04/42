/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ade-pinh <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/05 00:33:26 by ade-pinh          #+#    #+#             */
/*   Updated: 2023/09/13 01:02:22 by ade-pinh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write (1, &c, 1);
}

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
		i++;
	return (i);
}

void	ft_base(int nbr, char *base)
{
	if (nbr < 0)
	{
		write (1, "-", 1);
		nbr = -nbr;
	}
	if (nbr >= ft_strlen(base))
	{
		ft_base(nbr / ft_strlen(base), base);
		ft_base(nbr % ft_strlen(base), base);
	}
	else
		ft_putchar(base[nbr % ft_strlen(base)]);
}

void	ft_putnbr_base(int nbr, char *base)
{
	int	i;
	int	k;
	int	flag;

	flag = 0;
	if (ft_strlen(base) <= 1)
		flag = 1;
	i = 0;
	while (base[i] != '\0')
	{
		k = i + 1;
		while (base[k] != '\0')
		{
			if (base[i] == base[k])
				flag = 1;
			k++;
		}
		if (base[i] == '+' || base[i] == '-')
			flag = 1;
		i++;
	}
	if (flag == 0)
		ft_base(nbr, base);
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
