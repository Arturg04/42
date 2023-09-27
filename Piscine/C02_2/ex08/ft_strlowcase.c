/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlowcase.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ade-pinh <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/29 19:29:05 by ade-pinh          #+#    #+#             */
/*   Updated: 2023/08/30 23:40:30 by ade-pinh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

char	*ft_strlowcase(char *str)
{
	int	i;

	i = 0;
	while (*str != 0)
	{
		if (64 < *str && *str < 91)
		{
			*str = *str - 65 + 97;
		}
		str++ ;
		i++ ;
	}
	return (str - i);
}
/*
int main(void)
{
    char str[] = "TES te";
    char *teste; 
    teste = ft_strlowcase(str);
    printf("%s\n%s", str, teste);
    return (0);
}*/
