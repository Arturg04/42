/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ade-pinh <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/31 18:52:52 by ade-pinh          #+#    #+#             */
/*   Updated: 2023/09/03 14:17:39 by ade-pinh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

char	*ft_strstr(char *str, char *to_find)
{
	int		i;
	int		j;

	i = 0;
	j = 0;
	if (to_find[j] == '\0')
		return (&str[i]);
	while (str[i] != '\0')
	{
		while (to_find[j] == str[i + j] && str[i] != '\0')
		{
			if (to_find[j + 1] == '\0')
			{
				return (&str[i]);
			}
			j++;
		}
		j = 0;
		i++;
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
