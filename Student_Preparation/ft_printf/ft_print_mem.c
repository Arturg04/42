/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_mem.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ade-pinh <ade-pinh@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/11 20:28:27 by ade-pinh          #+#    #+#             */
/*   Updated: 2023/10/11 23:36:51 by ade-pinh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static unsigned int	ft_print_hex_ptr(unsigned long long n, char *base, int fd)
{
	int				size;

	if (fd < 0)
		return (0);
	size = 0;
	if (n >= ft_strlen(base))
	{
		size += ft_print_hex_ptr(n / ft_strlen(base), base, fd);
		size += ft_print_char(base[n % ft_strlen(base)], fd);
	}
	else
		size += ft_print_char(base[n % ft_strlen(base)], fd);
	return (size);
}

unsigned int	ft_print_mem(unsigned long long ptr, int fd)
{
	unsigned int	size;

	if (ptr == 0)
		return (write(fd, "(nil)", 5));
	size = write(fd, "0x", 2);
	size += ft_print_hex_ptr(ptr, "0123456789abcdef", 1);
	return (size);
}
