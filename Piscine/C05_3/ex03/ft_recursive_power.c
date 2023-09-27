/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ade-pinh <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/04 21:20:47 by ade-pinh          #+#    #+#             */
/*   Updated: 2023/09/04 23:09:24 by ade-pinh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_recursive_power(int nb, int power)
{
	if (power < 0)
		return (0);
	if (power == 0)
		return (1);
	return (nb * ft_recursive_power(nb, --power));
}

// #include <stdio.h>
// #include <stdlib.h>

// int main(int argc, char **argv)
// {
// 	if(argc < 2)
// 		return (0);
// 	printf("%d   %d\n", atoi(argv[1]), atoi(argv[2]));
// 	printf("%i", ft_recursive_power(atoi(argv[1]), atoi(argv[2])));
// }
