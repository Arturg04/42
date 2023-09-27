/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ade-pinh <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/31 00:25:25 by ade-pinh          #+#    #+#             */
/*   Updated: 2023/09/01 01:25:45 by ade-pinh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

int	ft_strncmp(char *s1, char *s2, unsigned int n)
{
	unsigned int	i;

	i = 0;
	while ((*s1 != 0 && *s2 != 0) && i < n)
	{
		if (*s1 == *s2)
		{
			s1++; 
			s2++;
			i++;
		}
		else
		{
			return (*s1 - *s2);
		}
	}
	return (0);
}
/*
int main(void)
{
    printf("%d\n", ft_strncmp("rad","rfgfas", 1));
    printf("%d\n", ft_strncmp("fgdf","rdsad", 2));
    printf("%d\n", ft_strncmp("","rad", 3));
    return 0;
}*/
