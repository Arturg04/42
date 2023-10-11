/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_putstr.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ade-pinh <ade-pinh@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/09 19:30:17 by ade-pinh          #+#    #+#             */
/*   Updated: 2023/10/11 23:16:19 by ade-pinh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

unsigned int	ft_print_putstr(char *str, int fd)
{
	unsigned int	size;

	if (fd < 0)
		return (0);
	if (!str)
		return (ft_print_putstr("(null)", fd));
	size = ft_strlen(str);
	return (write(fd, str, size));
}
