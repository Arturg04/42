/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ade-pinh <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/01 11:21:42 by ade-pinh          #+#    #+#             */
/*   Updated: 2023/09/03 01:07:22 by ade-pinh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (*str)
	{
		i++;
		str++;
	}
	return (i);
}
//
// int main(int argc, char **argv)
// {
//     if (argc < 1)
//     {
//         return (0);
//     }
//     printf("%i", ft_strlen(argv[1]));
//     return (0);
// }
