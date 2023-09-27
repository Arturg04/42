/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   helper.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ade-pinh <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/03 21:05:47 by ade-pinh          #+#    #+#             */
/*   Updated: 2023/09/03 21:55:14 by ade-pinh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

void ft_swap(char *a, int b, int c)
{
	char _temp = a[b];
	a[b] = a[c];
	a[c] = _temp;
}

char *ft_strcpy(char *dest, const char *src)
{
	int i = 0;
	while (src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}

int fatorial(int i)
{
	int soma = 1;
	while (i > 0)
	{
		soma = soma * i;
		i--;
	}
return (soma);
}

int permutacao_recursiva(char *input, char **all, int temp, int size, int count)
{
	int	i;

	if (temp == size)
	{
		input[size] = '\0';
		all[count] = (char *)malloc((size + 1) * sizeof(char));
		ft_strcpy(all[count], input);
		count++;
	}
	else {
		i = temp;
		while (i < size)
		{
			ft_swap(input, temp, i);
			count = permutacao_recursiva(input, all, temp + 1, size, count);
			ft_swap(input, temp, i);
			i++;
		}
	}
	return count;
}
