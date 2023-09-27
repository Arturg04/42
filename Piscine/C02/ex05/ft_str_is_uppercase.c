/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_uppercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ade-pinh <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/29 18:52:00 by ade-pinh          #+#    #+#             */
/*   Updated: 2023/08/30 23:36:24 by ade-pinh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

int	ft_str_is_uppercase(char *str)
{
	while (*str != 0)
	{
		if (64 < *str && *str < 91)
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
    printf("%i", ft_str_is_uppercase("teseS"));
    return (0);
}*/
