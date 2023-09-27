/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ade-pinh <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/31 00:25:25 by ade-pinh          #+#    #+#             */
/*   Updated: 2023/09/03 14:15:03 by ade-pinh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

int	ft_strncmp(char *s1, char *s2, unsigned int n)
{
	unsigned int	i;

	i = 0;
	while (i < n)
	{
		if (s1[i] != s2[i])
			return (s1[i] - s2[i]);
		else if ((s1[i] == '\0' || s2[i] == '\0'))
			return (0);
		i++;
	}
	return (0);
}
/*
int main(void)
{
    printf("%d\n", ft_strncmp("rad","rfgfas", 1));
    printf("%d\n", ft_strncmp("zgdf","rdsad", 2));
    printf("%d\n", ft_strncmp("","rad", 3));
    return 0;
}*/
