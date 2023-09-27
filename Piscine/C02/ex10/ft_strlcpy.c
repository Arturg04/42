/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ade-pinh <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/29 20:32:53 by ade-pinh          #+#    #+#             */
/*   Updated: 2023/08/30 23:51:57 by ade-pinh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

unsigned int	ft_strlcpy(char *dest, char *src, unsigned int size)
{
	unsigned int	i;

	i = 0;
	while (i < size - 1)
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = 0;
	while (*src != 0)
	{
		i++;
		src++;
	}
	return (i);
}
/*
int main(void)
{
    unsigned i;
    char src[] = "teste, teste";
    char dest[10];

    i = sizeof(dest) / sizeof (*dest);
    
    i = ft_strlcpy(dest, src, i);
    printf("%i      %s", i , dest);
    return (0);
}*/
