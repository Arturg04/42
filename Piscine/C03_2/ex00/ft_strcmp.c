/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ade-pinh <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/31 00:14:09 by ade-pinh          #+#    #+#             */
/*   Updated: 2023/09/01 01:20:30 by ade-pinh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

int	ft_strcmp(char *s1, char *s2)
{
	while (*s1 != 0 && *s2 != 0)
	{
		if (*s1 == *s2)
		{
			s1++;
			s2++;
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
    printf("%d\n", ft_strcmp("rad","rad"));
    printf("%d\n", ft_strcmp("raf","rad"));
    printf("%d\n", ft_strcmp("","rad"));
    return 0;
}*/
