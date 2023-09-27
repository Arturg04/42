/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ade-pinh <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/27 17:00:42 by ade-pinh          #+#    #+#             */
/*   Updated: 2023/08/28 21:24:32 by ade-pinh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

void	ft_rev_int_tab(int *tab, int size)
{
	int	a;
	int	i;

	i = 0;
	while ((size / 2) > i)
	{
		a = tab[i];
		tab[i] = tab[size - i -1];
		tab[size - i - 1] = a;
		i++;
	}
}
/*
int	main(void)
{
	int	size;
	int	tab[] = {0, 1, 2, 3, 4, 5};
	int	i = 0;

	size = sizeof(tab) / sizeof(tab[0]);
	ft_rev_int_tab(tab, size);
	while (i < size)
	{
		printf("%i", tab[i]);
		i++;
	}
	return (0);
}*/
