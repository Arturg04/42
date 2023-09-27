/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_non_printable.c                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ade-pinh <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/29 23:24:36 by ade-pinh          #+#    #+#             */
/*   Updated: 2023/08/31 23:50:46 by ade-pinh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putstr_non_printable(char *str)
{
	int	i;
	int c;
	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] < 0)
		{
			c = str[i] + 256;
			write (1, "\\", 1);
			write (1, &("0123456789abcdef"[c / 16]), 1);
			write (1, &("0123456789abcdef"[c % 16]), 1);
		}
		else if (str[i] >= 32 && str[i] <= 126)
		{
			write (1, &(str[i]), 1);
		}
		else
		{
			write (1, "\\", 1);
			write (1, &("0123456789abcdef"[str[i] / 16]), 1);
			write (1, &("0123456789abcdef"[str[i] % 16]), 1);
		}
		i++;
	}
}
/*
int	main (void)
{	
	for (char	i = -128; i <= 127; i++)
	{
		write (1, "\n", 1);
		ft_putstr_non_printable(&i);
	}
	return (0);
}*/
