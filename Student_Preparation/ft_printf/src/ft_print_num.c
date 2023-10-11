/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_num.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ade-pinh <artur.13.goncalves@gmail.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/10 08:16:59 by ade-pinh          #+#    #+#             */
/*   Updated: 2023/10/10 08:29:59 by ade-pinh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/printf.h"

int	ft_print_int(int n, int fd)
{
	int	neg;
	int	length;

	if (fd < 0)
		return (0);
	neg = 1;
	length = 0;
	if (n < 0)
	{
		length += ft_print_char('-', fd);
		neg *= -1;
		length++;
	}
	if (n > 9 || n < -9)
		length += ft_print_int(n / 10 * neg, fd);
	length += ft_print_char(n % 10 * neg + 48, fd);
	return (length);
}

int	ft_print_unsigned_int(unsigned int n, int fd)
{
	int	length;

	if (fd < 0)
		return (0);
	length = 0;
	if (n > 9 || n < -9)
		length += ft_print_unsigned_int(n / 10, fd);
	length += ft_print_char(n % 10 + 48, fd);
	return (length);
}