/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ade-pinh <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/31 18:39:07 by ade-pinh          #+#    #+#             */
/*   Updated: 2023/09/03 14:16:57 by ade-pinh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

char	*ft_strncat(char *dest, char *src, unsigned int nb)
{
	unsigned int	i;
	unsigned int	j;

	i = 0;
	j = 0;
	while (dest[j] != '\0')
		j++;
	while (i < nb && src[i] != '\0')
	{
		dest[j + i] = src[i];
		i++;
	}
	if (dest[j + i] != '\0')
		dest[j + i] = '\0';
	return (dest);
}
/*
int main(void)
{
    char dest[] = "sdf";
    ft_strncat(dest, "asdfghjkl", 1);
    printf("%s", dest);
    return 0;
}*/
