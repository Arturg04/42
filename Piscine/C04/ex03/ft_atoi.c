/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ade-pinh <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/03 00:40:23 by ade-pinh          #+#    #+#             */
/*   Updated: 2023/09/04 20:00:35 by ade-pinh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

int	ft_atoi(char *str)
{
	int	i;
	int	negative;
	int	number;

	i = 0;
	negative = 0;
	number = 0;
	while (str[i] && ((str[i] > 8 && str[i] < 14) || str[i] == ' '))
	{
		i++;
	}
	while (str[i] && (str[i] == '-' || str[i] == '+'))
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
/*
int		main(void)
{
	char	*str;
	str = "---+--+1234ab567";
	printf("%d \n", ft_atoi(str));
	return (0);
}*/
