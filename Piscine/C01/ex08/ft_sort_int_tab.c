/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_int_tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ade-pinh <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/28 20:02:55 by ade-pinh          #+#    #+#             */
/*   Updated: 2023/08/28 21:15:48 by ade-pinh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

void	ft_sort_int_tab(int *tab, int size)
{
	int	i;
	int	j;

	i = 1;
	while (i < size)
	{
		if (tab[i] < tab[i - 1])
		{
			j = tab[i];
			tab[i] = tab[i - 1];
			tab[i - 1] = j;
			i = 1;
			continue ;
		}
		i++;
	}
}
/*
int	main(void)
{
	int	size;
	int	tab[] = {2, 3, 5, 7, 8, 0};
	int	i;

	i = 0;
	size = sizeof(tab) / sizeof(tab[0]);
	ft_sort_int_tab(tab, size);
	while (i < size)
	{
		printf("%i", tab[i]);
		i++;
	}
	return (0);
}*/
