/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi_base.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ade-pinh <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/03 03:30:42 by ade-pinh          #+#    #+#             */
/*   Updated: 2023/09/11 22:55:19 by ade-pinh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	checkbase(char *base)
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
		if (base[i] == '+' || base[i] == '-' || base[i] < 33 || base[i] > 126)
			return (0);
		i++;
	}
	if (i < 2)
		return (0);
	return (i);
}

void	checkstr(char *str, char *base)
{
	int	i;
	int	j;

	i = -1;
	while (str[++i])
	{
		j = -1;
		while (base[++j])
		{
			if (str[i] == base[j])
				break ;
		}
		if (base[j] == 0)
		{
			str[i] = '\0';
			break ;
		}
	}
}

int	power(int base, int power)
{
	long int	res;

	res = 1;
	if (power == 0)
		return (1);
	while (--power > 0)
		res *= base;
	if (res > 2147483647)
		return (0);
	return (res);
}

int	helper(char *str, char *base, int size)
{
	int	i;
	int	j;
	int	k;
	int	res;

	i = 0;
	k = 0;
	res = 0;
	while (str[k])
		k++;
	while (str[i])
	{
		j = 0;
		while (str[i] != base[j])
			j++;
		if (base[j] == 0)
			return (res);
		res += (j) * power(size, k - i++);
	}
	return (res);
}

int	ft_atoi_base(char *str, char *base)
{
	int	size;
	int	negative;

	negative = 1;
	size = checkbase(base);
	if (size < 2)
		return (0);
	while (*str && ((*str > 8 && *str < 14) || *str == ' '))
		str++;
	while (*str && (*str == '-' || *str == '+'))
	{
		if (*str == '-')
			negative++;
		str++;
	}
	checkstr(str, base);
	if (negative % 2 != 0)
		negative = -1;
	else
		negative = 1;
	return (helper(str, base, size) * negative);
}

// #include <stdio.h>

// int	main(int a, char **b)
// {
// 	if (a != 3)
// 		return (0);
// 	printf("%i\n", ft_atoi_base(b[1], b[2]));
// 	return (0);
// }
