/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ade-pinh <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/31 18:52:52 by ade-pinh          #+#    #+#             */
/*   Updated: 2023/09/01 01:32:54 by ade-pinh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

char	*ft_strstr(char *str, char *to_find)
{
	unsigned int	j;

	j = 0;
	while (*str != 0)
	{
		if (*str == to_find[j] || to_find[j] == 0)
		{
			if (to_find[j] == 0)
			{
				str = str - j;
				return (str);
			}
			j++;
		}
		else
		{
			j = 0;
			if (to_find[j] == *str)
			{
				j++;
			}
		}
		str++;
	}
	return (0);
}
/*
int main(void)
{
    char c[] = "trasdaadsd";
    char b[] = "traaddaadsd";

    char *d = ft_strstr(c, "ad");
    char *e = ft_strstr(b, "ad");

    printf("%s\n", d);
    printf("%s", e);
    return (0);
}*/
