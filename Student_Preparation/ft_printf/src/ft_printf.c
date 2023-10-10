/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ade-pinh <artur.13.goncalves@gmail.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/07 16:44:55 by ade-pinh          #+#    #+#             */
/*   Updated: 2023/10/10 08:18:01 by ade-pinh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_params(char c,va_list list)
{
	(void)list;
	if (c == 'c')
	{
		ft_putchar_fd(va_arg(list, char), 1);
		return (1);
	}
	else if (c == 's')
		return (0);
	else if (c == 'p')
		return (0);
	else if (c == 'd')
		return (0);
	else if (c == 'i')
		return (0);
	else if (c == 'u')
		return (0);
	else if (c == 'x')
		return (0);
	else if (c == 'X')
		return (0);
	else if (c == '%')
		return (0);
	return (0);
}

int	ft_printf(const char *str, ...)
{
	va_list	list;
	int		size;

	size = 0;
	if (!str)
		return (0);
	va_start(list, str);
	while (*str)
	{
		if ('%' == *str)
		{
			size += ft_params(*(++str), list);
			str++;
		}
		else if (*str)
			ft_putchar_fd(*str++, 1);
	}
	va_end(list);
	return (size);
}
