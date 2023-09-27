/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ade-pinh <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/03 01:27:29 by ade-pinh          #+#    #+#             */
/*   Updated: 2023/09/03 04:41:47 by ade-pinh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int	checkchar(char c)
{
	if (c < 32 || c < 126)
		return (0);
	if (c == '+' || c == '-')
		return (0);
	return (1);
}

int	sringtobase(char *str, int i, int j)
{
	int	k;

	if (str[0] == '\0' || str[1] == '\0')
		return (0);
	while (str[i])
	{
		checkchar(str[i]);
		i++;
	}
	while (j < i)
	{
		k = 0;
		while (k < i)
		{
			if (str[k] == str[j] && j != k)
				return (0);
			k++;
		}
		j++;
	}
	return (i);
}

void	ft_putnbr_base(int nbr, char *base)
{
	int	size;
	int	result[100];
	int	i;

	i = 0;
	size = 0;
	if (sringtobase(base, 0, 0) != 0)
	{
		if (nbr < 0)
		{
			nbr = -nbr;
			ft_putchar('-');
		}
		while (base[size])
			size++;
		while (nbr)
		{
			result[i] = nbr % size;
			nbr /= size;
			i++;
		}
		while (i-- > 0)
			ft_putchar(base[result[i]]);
	}
}
// int main(void)
// {
// 	ft_putnbr_base(-20, "0123456789ABCDEF");
// 	ft_putchar('\n');
// 	ft_putnbr_base(20, "art5");
// 	ft_putchar('\n');
// 	ft_putnbr_base(20, "a2tu");
// 	ft_putchar('\n');
// 	ft_putnbr_base(20, "arru");
// 	return (0);
// }
