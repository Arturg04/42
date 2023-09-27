/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_find_next_prime.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ade-pinh <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/04 23:17:18 by ade-pinh          #+#    #+#             */
/*   Updated: 2023/09/04 23:29:50 by ade-pinh         ###   ########.fr       */
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

int	ft_find_next_prime(int nb)
{
	while (!(ft_is_prime(++nb)))
	{
	}
	return (nb);
}

// #include <stdio.h>
// #include <stdlib.h>

// int main(int argc, char **argv)
// {
// 	if(argc < 2)
// 		return (0);
// 	printf("%i", ft_find_next_prime(atoi(argv[1])));
// }
