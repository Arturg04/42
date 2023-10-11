/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_str.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ade-pinh <artur.13.goncalves@gmail.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/09 19:30:17 by ade-pinh          #+#    #+#             */
/*   Updated: 2023/10/10 08:22:17 by ade-pinh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/ft_printf.h"

int	ft_printf_str(char	*str, int fd)
{
	int	length;

	if (fd < 0)
		return (0);
	length = ft_strlen(str);
	write(fd, str, length);
	return (length);
}
