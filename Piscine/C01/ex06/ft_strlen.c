/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ade-pinh <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/27 17:00:42 by ade-pinh          #+#    #+#             */
/*   Updated: 2023/08/28 21:38:38 by ade-pinh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (*str != 0)
	{
		i++;
		str++;
	}
	return (i);
}
/*
int	main(void)
{
	char	*a;
	a = "asada";
	int	i;
	i = ft_strlen(a);
	printf("%i" , i);
	return (0);
}*/
