/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_fibonacci.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ade-pinh <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/04 21:38:40 by ade-pinh          #+#    #+#             */
/*   Updated: 2023/09/11 19:25:42 by ade-pinh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_fibonacci(int index)
{
	int	i;
	int	j;
	int	k;

	i = 0;
	j = 1;
	if (index < 0)
		return (-1);
	while (index--)
	{
		k = j + i;
		i = j;
		j = k;
	}
	return (i);
}

// #include <stdio.h>
// #include <stdlib.h>

// int main(int argc, char **argv)
// {
// 	if(argc < 2)
// 		return (0);
// 	printf("%i\n", ft_fibonacci(atoi(argv[1])));
// }
