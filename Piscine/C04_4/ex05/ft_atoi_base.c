/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi_base.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ade-pinh <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/03 03:30:42 by ade-pinh          #+#    #+#             */
/*   Updated: 2023/09/13 01:06:27 by ade-pinh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
		i++;
	return (i);
}

int	ft_power(int a, int b)
{
	int	i;
	int	pot;

	pot = 1;
	i = 0;
	while (i < b)
	{
		pot *= a;
		i++;
	}
	return (pot);
}

int	ft_convert(char *str, char *base)
{
	int	i;
	int	k;
	int	num;
	int	t;

	i = 0;
	t = 0;
	num = 0;
	while (str[i] != '\0')
	{
		k = 0;
		while (base[k] != '\0')
		{
			if (str[i] == base[k])
				num += k * ft_power(ft_strlen(base), ft_strlen(str) - i - 1);
			k++;
		}
		i++;
	}
	return (num);
}

int	ft_whtspc(char c)
{
	if (c == '+' || c == '-' || (c > 9 && c < 14) || c == 32)
		return (1);
	return (0);
}

int	ft_atoi_base(char *str, char *base)
{
	int	flag;
	int	i;
	int	k;

	flag = 0;
	i = 0;
	if (ft_strlen(base) <= 1)
		flag = 1;
	while (base[i] != '\0')
	{
		k = i + 1;
		while (base[k] != '\0')
		{
			if (base[i] == base[k])
				flag = 1;
			k++;
		}
		if (ft_whtspc(base[i]) == 1)
			flag = 1;
		i++;
	}
	if (flag == 0)
		return (ft_convert(str, base));
	return (0);
}

// #include <stdio.h>

// int	main(int a, char **b)
// {
// 	if (a != 3)
// 		return (0);
// 	printf("%i\n", ft_atoi_base(b[1], b[2]));
// 	return (0);
// }
