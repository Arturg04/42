/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_memory.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ade-pinh <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/10 00:21:48 by ade-pinh          #+#    #+#             */
/*   Updated: 2023/09/11 19:14:15 by ade-pinh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putstr(char *str)
{
	while (*str)
		write(1, &(*str++), 1);
}

void	checkstr(char *str, char *dst, unsigned int i)
{
	unsigned int	j;

	j = 0;
	while (str[j] && j < i)
	{
		if (str[j] > 126 || str[j] < 32)
			dst[j] = 46;
		else
			dst[j] = str[j];
		j++;
	}
	dst[j] = 0;
}

void	ft_getlocation(char *str, int index)
{
	int				j;
	int				addrs;
	long long int	i;
	char			arr[17];

	i = (long long int)(&str[index]);
	j = 16;
	arr[j] = 0;
	while (--j > -1)
	{
		addrs = i & 15;
		if (addrs < 10)
			arr[j] = ('0' + addrs);
		else
			arr[j] = ('a' + addrs - 10);
		i >>= 4;
	}
	ft_putstr(arr);
	ft_putstr(":");
}

void	helper(unsigned int j, char *str)
{
	char	dst[3];

	while (j < 16)
	{
		if (j % 2 == 0)
			write(1, " ", 1);
		if (str[j] == 0)
		{
			while (j < 16)
			{
				if (j++ % 2 == 0)
					write(1, " ", 1);
				write(1, "  ", 2);
			}
		}
		if (j < 16)
		{
			dst[0] = "0123456789abcdef"[str[j] / 16];
			dst[1] = "0123456789abcdef"[str[j] % 16];
			dst[2] = 0;
			ft_putstr(dst);
		}
		j++;
	}
}

void	*ft_print_memory(void *addr, unsigned int size)
{
	char			str[17];
	unsigned int	i;

	i = 0;
	while (((char *)(addr))[i] && size > 0 && i < size)
	{
		checkstr(&(addr[i]), str, 16);
		ft_getlocation((char *)(addr), i);
		helper(0, str);
		write(1, " ", 1);
		ft_putstr(str);
		i += 16;
		write(1, "\n", 1);
	}
	return (addr);
}

// int	main(int a, char **b)
// {
// 	(void)a;
// 	(void)b;
// 	int i;

// 	char *p = "sdf OAN;OIRG ;EUIO\12WB\14IEU O\15IASN	oj fsoine apisaap";
// 	i = 0;
// 	while (p[i])
// 	{
// 		i++;
// 	}
// 	ft_print_memory(p, i);
// }
