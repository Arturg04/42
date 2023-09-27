/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_combn.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ade-pinh <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/08 10:59:25 by ade-pinh          #+#    #+#             */
/*   Updated: 2023/09/08 11:47:11 by ade-pinh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
//#include <stdlib.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putstr(char *str)
{
	while (*str)
		ft_putchar(*(str++));
}

void	ft_print_combn(int n)
{
	int		i;
	char	num[10];

	i = -1;
	while (++i < n)
		num[i] = i + 48;
	num[i--] = 0;
	while (num[0] != (10 - n + 48))
	{
		while (num[i] <= (10 - n + i + 48))
		{
			ft_putstr(num);
			ft_putstr(", ");
			num[i]++;
		}
		while (num[i] == (11 - n + i + 48) && i > 0)
			i--;
		if (num[0] == (10 - n + 48))
			break ;
		num[i]++;
		while (++i < n)
			num[i] = num[i - 1] + 1;
		i--;
	}
	ft_putstr(num);
}

// int	main(int a, char **b)
// {
// 	if (a != 2)
// 		return (0);
// 	ft_print_combn(atoi(b[1]));
// 	return (0);
// }
