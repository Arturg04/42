/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi_base.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ade-pinh <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/03 03:30:42 by ade-pinh          #+#    #+#             */
/*   Updated: 2023/09/03 04:37:53 by ade-pinh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	count(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		if (str[i] < 32 || str[i] > 126)
			return (0);
		if (str[i] == '+' || str[i] == '-')
			return (0);
		i++;
	}
	return (i);
}

int	sringtobase(char *str)
{
	int	i;
	int	j;
	int	k;

	j = 0;
	if (str[0] == '\0' || str[1] == '\0')
		return (0);
	i = count(str);
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

int	ft_atoi(char *str)
{
	int	i;
	int	negative;
	int	number;

	i = 0;
	negative = 0;
	number = 0;
	while (str[i] != 0 && ((str[i] > 9 && str[i] < 13) || str[i] == ' '))
	{
		i++;
	}
	while (str[i] != 0 && (str[i] == '-' || str[i] == '+'))
	{
		if (str[i] == '-')
			negative++;
		i++;
	}
	while (str[i] >= 48 && str[i] <= 57)
	{
		number = number * 10 + str[i] - 48;
		i++;
	}
	if (negative % 2 == 1)
		return (number * -1);
	return (number);
}

int	ft_putnbr_base(int nbr, char *base, int res, int i)
{
	int	size;
	int	result[100];
	int	neg;

	size = 0;
	neg = 1;
	if (sringtobase(base) != 0)
	{
		if (nbr < 0)
		{
			nbr = -nbr;
			neg = -1;
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
			res = res * 10 + result[i];
	}
	return (res * neg);
}

int	ft_atoi_base(char *str, char *base)
{
	return (ft_putnbr_base(ft_atoi(str), base, 0, 0));
}
// #include <stdio.h>
// int main(void)
// {
// 	printf("%d", ft_atoi_base("-20", "0123456789ABCDEF"));
// 	// ft_putchar('\n');
// 	// ft_atoi_base("20", "art5");
// 	// ft_putchar('\n');
// 	// ft_atoi_base("20", "a2tu");
// 	// ft_putchar('\n');
// 	// ft_atoi_base("20", "arru");
// 	return (0);
// }
