/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ade-pinh <artur.13.goncalves@gmail.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/07 16:44:55 by ade-pinh          #+#    #+#             */
<<<<<<< HEAD:Student_Preparation/ft_printf/ft_printf.c
/*   Updated: 2023/10/11 23:14:33 by ade-pinh         ###   ########.fr       */
=======
/*   Updated: 2023/10/10 08:18:01 by ade-pinh         ###   ########.fr       */
>>>>>>> cb1554b951bed7f31b0dca6c5bcef97a1d82658b:Student_Preparation/ft_printf/src/ft_printf.c
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

<<<<<<< HEAD:Student_Preparation/ft_printf/ft_printf.c
unsigned int	ft_params(char c, va_list list, int fd)
=======
int	ft_params(char c,va_list list)
>>>>>>> cb1554b951bed7f31b0dca6c5bcef97a1d82658b:Student_Preparation/ft_printf/src/ft_printf.c
{
	if (c == 'c')
		return (ft_print_char(va_arg(list, int), fd));
	else if (c == 's')
		return (ft_print_putstr(va_arg(list, char *), fd));
	else if (c == 'p')
		return (ft_print_mem(va_arg(list, unsigned long long), fd));
	else if (c == 'd' || c == 'i')
		return (ft_print_num(va_arg(list, int), fd));
	else if (c == 'u')
		return (ft_print_un_num(va_arg(list, unsigned int), fd));
	else if (c == 'x')
		return (ft_print_hex(va_arg(list, int), "0123456789abcdef", fd));
	else if (c == 'X')
		return (ft_print_hex(va_arg(list, int), "0123456789ABCDEF", fd));
	else if (c == '%')
		return (write(fd, "%", 1));
	return (0);
}

int	ft_printf(const char *str, ...)
{
	va_list			list;
	unsigned int	size;

	size = 0;
	if (!str)
		return (0);
	va_start(list, str);
	while (*str)
	{
		if ('%' == *str)
		{
			size += ft_params(*(++str), list, 1);
			str++;
		}
		else if (*str)
			size += ft_print_char(*str++, 1);
	}
	va_end(list);
	return ((int)size);
}
