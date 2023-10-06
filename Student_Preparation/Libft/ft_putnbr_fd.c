/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ade-pinh <ade-pinh@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/05 19:30:40 by Arturg04          #+#    #+#             */
/*   Updated: 2023/10/06 20:46:48 by ade-pinh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putnbr_fd(int n, int fd)
{
	int	neg;

	neg = 1;
	if (n < 0)
	{
		ft_putchar_fd('-', fd);
		neg *= -1;
	}
	if (n > 9 || n < -9)
		ft_putnbr_fd(n / 10 * neg, fd);
	ft_putchar_fd(n % 10 * neg + 48, fd);
}
