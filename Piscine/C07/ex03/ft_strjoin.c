/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ade-pinh <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/07 23:16:43 by ade-pinh          #+#    #+#             */
/*   Updated: 2023/09/08 02:17:46 by ade-pinh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

int	count(char *str)
{
	int	i;

	i = 0;
	while (str[i++])
	{
	}
	return (i);
}

char	*ft_strjoin(int size, char **strs, char *sep)
{
	char	*str;
	int		i;
	int		j;
	int		k;
	int		total;

	i = -1;
	k = 0;
	total = 0;
	while (++i < size)
		total += count(strs[i]);
	i = -1;
	str = malloc(sizeof(strs));
	while (++i < size)
	{
		j = 0;
		while (strs[i][j])
			str[k++] = strs[i][j++];
		j = 0;
		while (sep[j] && i < size - 1)
			str[k++] = sep[j++];
	}
	str[k] = 0;
	return (str);
}

int	main(void)
{
	char	*tab[4];
	tab[0] = " ";
	tab[1] = " ";
	tab[2] = " ";
	tab[3] = " ";
	printf("%s\n", ft_strjoin(4, tab, "testaaaaaaaaaaaaaaaaaae"));
	return (0);
}
