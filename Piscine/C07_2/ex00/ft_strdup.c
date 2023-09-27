/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ade-pinh <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/07 01:11:44 by ade-pinh          #+#    #+#             */
/*   Updated: 2023/09/08 00:36:28 by ade-pinh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
//#include <stdio.h>

char	*ft_strdup(char *src)
{
	char	*str;
	int		i;
	int		j;

	i = 0;
	j = -1;
	while (src[i])
		i++;
	str = (char *)malloc(sizeof(char) * i + 1);
	if (str == NULL)
		return (str);
	while (src[++j])
		str[j] = src[j];
	str[j] = 0;
	return (str);
}

// int main() {
//   char *str = "asdasdadasddddddd";
//   char *str2;

//   str2 = ft_strdup(str);
//   printf("%s\n", str2);
//   free(str2);
//   return (0);
// }
