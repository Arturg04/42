/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_printable.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ade-pinh <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/29 19:03:49 by ade-pinh          #+#    #+#             */
/*   Updated: 2023/08/30 23:37:39 by ade-pinh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

int	ft_str_is_printable(char *str)
{
	while (*str != 0)
	{
		if (31 < *str && *str < 127)
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
    printf("%i", ft_str_is_printable("Tes te"));
    return (0);
}*/
