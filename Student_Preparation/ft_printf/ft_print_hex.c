/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_hex.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ade-pinh <ade-pinh@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/11 18:42:02 by ade-pinh          #+#    #+#             */
/*   Updated: 2023/10/11 21:47:06 by ade-pinh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

unsigned int	ft_print_hex(int n, char *base, int fd)
{
	int				size;
	unsigned int	num;

	num = (unsigned int)n;
	if (fd < 0)
		return (0);
	size = 0;
	if (num >= ft_strlen(base))
	{
		size += ft_print_hex(num / ft_strlen(base), base, fd);
		size += ft_print_char(base[num % ft_strlen(base)], fd);
	}
	else
		size += ft_print_char(base[num % ft_strlen(base)], fd);
	return (size);
}
