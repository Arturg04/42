/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ade-pinh <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/07 22:09:30 by ade-pinh          #+#    #+#             */
/*   Updated: 2023/09/08 00:37:50 by ade-pinh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
//#include <stdio.h>

int	*ft_range(int min, int max)
{
	int	i;
	int	*arr;

	if (min >= max)
		return (0);
	i = 0;
	arr = (int *)malloc((max - min) * sizeof(int));
	if (arr == NULL)
		return (NULL);
	while (max > min)
	{
		arr[i++] = min;
		min++;
	}
	return (arr);
}

// int	main(int ac, char **av)
// {
// 	int *teste;

// 	if (ac != 3)
// 		return (0);
// 	teste = ft_range(atoi(av[1]), atoi(av[2]));
// 	if (teste == NULL)
// 		return -1;
// 	while (*teste)
// 	{
// 		printf("%d\n", *teste);
// 		teste++;
// 	}

// 	return (0);
// }
