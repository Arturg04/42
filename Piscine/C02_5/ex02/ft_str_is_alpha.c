/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_alpha.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ade-pinh <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/29 18:45:26 by ade-pinh          #+#    #+#             */
/*   Updated: 2023/08/30 23:31:08 by ade-pinh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

int	ft_str_is_alpha(char *str)
{
	while (*str != 0)
	{
		if ((64 < *str && *str < 91) || (96 < *str && *str < 123))
		{
			str++;
			continue ;
		}
		return (0);
	}
	return (1);
}
/*
int main(void)
{
    printf("%i", ft_str_is_alpha("teste4"));
    return (0);
}*/
