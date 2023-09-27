/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_numeric.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ade-pinh <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/29 18:45:46 by ade-pinh          #+#    #+#             */
/*   Updated: 2023/08/30 23:32:43 by ade-pinh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

int	ft_str_is_numeric(char *str)
{
	while (*str != 0)
	{
		if (47 < *str && *str < 58)
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
    printf("%i", ft_str_is_numeric("2"));
    return (0);
}*/
