/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_num.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ade-pinh <ade-pinh@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/11 18:28:41 by ade-pinh          #+#    #+#             */
/*   Updated: 2023/10/11 22:52:38 by ade-pinh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

unsigned int	ft_print_num(int n, int fd)
{
	int				neg;
	unsigned int	size;

	size = 0;
	if (fd < 0)
		return (size);
	neg = 1;
	if (n < 0)
	{
		size += ft_print_char('-', fd);
		neg *= -1;
	}
	if (n > 9 || n < -9)
		size += ft_print_num(n / 10 * neg, fd);
	size += ft_print_char(n % 10 * neg + 48, fd);
	return (size);
}

unsigned int	ft_print_un_num(unsigned int n, int fd)
{
	unsigned int	size;

	size = 0;
	if (fd < 0)
		return (size);
	if (n > 9)
		size += ft_print_num(n / 10, fd);
	size += ft_print_char(n % 10 + 48, fd);
	return (size);
}
