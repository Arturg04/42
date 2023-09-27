/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ade-pinh <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/04 22:24:16 by ade-pinh          #+#    #+#             */
/*   Updated: 2023/09/11 20:18:07 by ade-pinh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_sqrt(int nb)
{
	int	i;

	i = 0;
	while (++i)
	{
		if (i * i == nb)
			return (i);
		if (i > 46340)
			return (0);
	}
	return (0);
	while (i *i < nb)
	{
		i++;
	}
	if (i * i == nb)
		return (nb);
	return (0);

}

// #include <stdio.h>
// #include <stdlib.h>

// int main(int ac, char **av)
// {
// 	(void)ac;

// 	printf("%i", ft_sqrt(atoi(av[1])));
// }
