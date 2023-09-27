/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ade-pinh <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/29 00:16:43 by ade-pinh          #+#    #+#             */
/*   Updated: 2023/08/30 23:25:33 by ade-pinh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

char	*ft_strcpy(char *dest, char *src)
{
	int	i;

	i = 0;
	while (src[i] != 0)
	{
		dest[i] = src[i]; 
		i++;
	}
	dest[i] = '\0';
	return (dest);
}
/*
int main(void)
{
    char dest[] = "";
    char *teste;
    teste = ft_strcpy(dest, "teste");
    printf("%s\n%s", dest, teste);
    return (0);
}*/
