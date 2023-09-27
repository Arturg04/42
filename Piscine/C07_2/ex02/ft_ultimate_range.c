/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ade-pinh <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/07 22:46:10 by ade-pinh          #+#    #+#             */
/*   Updated: 2023/09/08 00:36:11 by ade-pinh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
// #include <stdio.h>

int	ft_ultimate_range(int **range, int min, int max)
{
	int	i;
	int	*arr;

	if (min >= max)
	{
		*range = NULL;
		return (0);
	}
	i = 0;
	arr = (int *)malloc((max - min) * sizeof(int));
	if (arr == NULL)
	{
		*range = NULL;
		return (-1);
	}
	while (max > min)
	{
		arr[i++] = min;
		min++;
	}
	*range = arr;
	return (i);
}

// int	main(int ac, char **av)
// {
// 	int *teste;
// 	int teste1;

// 	if (ac != 3)
// 		return (0);
// 	teste1 = ft_ultimate_range(&teste ,atoi(av[1]), atoi(av[2]));
// 	if (teste == NULL)
// 		return -1;
// 	while (*teste)
// 	{
// 		printf("%d %d\n", teste1, *teste);
// 		teste++;
// 	}

// 	return (0);
// }
