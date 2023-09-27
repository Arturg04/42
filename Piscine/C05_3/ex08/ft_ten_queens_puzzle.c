/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ten_queens_puzzle.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ade-pinh <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/10 14:06:12 by ade-pinh          #+#    #+#             */
/*   Updated: 2023/09/10 20:11:17 by ade-pinh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putstr(char *str)
{
	while (*str)
		write(1, &(*(str++)), 1);
}

int validation(char *str)
{
	int		i;
	int		k;
	int		j;
	char	a;

	i = -1;
	while (str[++i])
	{
		a = str[i];
		j = str[i];
		k = 0;
		while (++k < 10 - i)
		{
			j++;
			if (j == str[i + k] || j == str[i + k] + k || j == str[i + k] - k)
				return (0);
			a--;
			if (a == str[i + k] || a == str[i + k] + k || a == str[i + k] - k)
				return (0);
		}
	}
	return (1);
}

void ft_swap(char *a, int b, int c)
{
	char _temp = a[b];
	a[b] = a[c];
	a[c] = _temp;
}

int permutacao_recursiva(char *input, int temp, int count)
{
	int	i;

	if (temp == 10)
	{
		input[temp] = '\0';
		if (validation(input))
		{
			ft_putstr(input);
			ft_putstr("\n");
			count++;
		}
	}
	else {
		i = temp;
		while (i < 10)
		{
			ft_swap(input, temp, i);
			count += permutacao_recursiva(input, temp + 1, count);
			ft_swap(input, temp, i);
			i++;
		}
	}
	return count;
}

int	ft_ten_queens_puzzle(void)
{
	char	arr[11];
	int		i;

	i = -1;
	while (++i < 10)
		arr[i] = '0' + i;
	return (permutacao_recursiva(arr, 0, 0));
}

#include <stdio.h>

int main(int a, char **b)
{
	(void)a;
	printf("%i", ft_ten_queens_puzzle());
}
