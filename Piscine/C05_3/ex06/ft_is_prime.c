/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_prime.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ade-pinh <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/04 23:02:17 by ade-pinh          #+#    #+#             */
/*   Updated: 2023/09/10 13:58:56 by ade-pinh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_is_prime(int nb)
{
	int	num;

	num = 2;
	if (nb <= 1)
		return (0);
	while (num <= nb / num)
	{
		if (nb % num == 0)
			return (0);
		num ++;
	}
	return (1);
}

// #include <stdio.h>
// #include <stdlib.h>

// int main(int argc, char **argv)
// {
// 	if(argc < 2)
// 		return (0);
// 	printf("%i", ft_is_prime(atoi(argv[1])));
// }
