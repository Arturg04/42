/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strupcase.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ade-pinh <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/29 19:16:11 by ade-pinh          #+#    #+#             */
/*   Updated: 2023/08/30 23:39:05 by ade-pinh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

char	*ft_strupcase(char *str)
{
	int	i;

	i = 0;
	while (*str != 0)
	{
		if (96 < *str && *str < 123)
		{
			*str = *str - 97 + 65;
		}
		str++ ;
		i++ ;
	}
	return (str - i);
}
/*
int main(void)
{
    char str[] = "tes te";
    char *teste;
    teste = ft_strupcase(str);
    printf("%s\n%s", str, teste);
    return (0);
}*/
