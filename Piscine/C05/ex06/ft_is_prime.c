/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_prime.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ade-pinh <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/04 23:02:17 by ade-pinh          #+#    #+#             */
/*   Updated: 2023/09/04 23:11:44 by ade-pinh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_is_prime(int nb)
{
	int	i;
	int	count;

	i = nb;
	count = 0;
	while (i-- > 1)
	{
		if (nb % i == 0)
			count++;
	}
	if (count == 1)
		return (1);
	return (0);
}

// #include <stdio.h>
// #include <stdlib.h>

// int main(int argc, char **argv)
// {
// 	if(argc < 2)
// 		return (0);
// 	printf("%i", ft_is_prime(atoi(argv[1])));
// }
