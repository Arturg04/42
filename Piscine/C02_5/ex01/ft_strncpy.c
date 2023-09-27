/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ade-pinh <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/29 00:47:06 by ade-pinh          #+#    #+#             */
/*   Updated: 2023/08/30 23:26:59 by ade-pinh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

char	*ft_strncpy(char *dest, char *src, unsigned int n)
{
	unsigned int	i;

	i = 0;
	while (*src != 0 && i < n)
	{
		*dest = *src; 
		dest++;
		src++;
		i++;
	}
	while (i < n)
	{
		*dest = '\0';
		i++;
		dest++;
	}
	return (dest - i);
}
/*
int main(void)
{
    char dest[] = "";
    char *teste;

    teste = ft_strncpy(dest, "teste", 4);
    printf("%s\n%s", dest, teste);
    return (0);
}*/
