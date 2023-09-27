/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_non_printable.c                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ade-pinh <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/29 23:24:36 by ade-pinh          #+#    #+#             */
/*   Updated: 2023/09/11 19:16:34 by ade-pinh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_put_hexa(int c, int err)
{
	char	*base;

	base = "0123456789abcdef";
	if (c < 0)
	{
		c += 256;
	}
	ft_putchar(base[c / 16]);
	ft_putchar(base[c % 16]);
}

void	ft_putstr_non_printable(char *str)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	while (str[i])
	{
		if (str[i] < 32 || str[i] == 127)
		{
			ft_putchar('\\');
			j = str[i];
			ft_put_hexa(j, 0);
		}
		else
		{
			ft_putchar(str[i]);
		}
		i++;
	}
	ft_putchar('\n');
}

// int		main(void)
// {
// 	char	*str;

// 	int i = -128;
// 	ft_putstr_non_printable("teste\300 \n teste");
// 	while (i <= 127)
// 	{
// 		ft_putchar(i);
// 		ft_putchar('\n');
// 		ft_put_hexa(i, 1);
// 		ft_putchar('\n');
// 		i++;
// 	}
// }
