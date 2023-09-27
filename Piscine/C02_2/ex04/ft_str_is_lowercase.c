/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_lowercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ade-pinh <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/29 18:49:11 by ade-pinh          #+#    #+#             */
/*   Updated: 2023/08/30 23:34:34 by ade-pinh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

int	ft_str_is_lowercase(char *str)
{
	while (*str != 0)
	{
		if (96 < *str && *str < 123)
		{
			str++ ;
			continue ;
		}
		return (0);
	}
	return (1);
}
/*
int main(void)
{
    printf("%i", ft_str_is_lowercase("teseS"));
    return (0);
}*/
