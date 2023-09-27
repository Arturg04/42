/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_find_next_prime.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ade-pinh <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/04 23:17:18 by ade-pinh          #+#    #+#             */
/*   Updated: 2023/09/10 13:59:29 by ade-pinh         ###   ########.fr       */
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

int	ft_find_next_prime(int nb)
{
	if (nb <= 1)
		return (2);
	while (!(ft_is_prime(nb)))
		nb++;
	return (nb);
}

// #include <stdio.h>
// #include <stdlib.h>

// int main(void)
// {
// 	printf("%i\n", ft_find_next_prime(1024958));
// }
