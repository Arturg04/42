/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Arturg04 <artur.13.goncalves@gmail.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/30 12:05:45 by Arturg04          #+#    #+#             */
/*   Updated: 2023/10/01 21:41:58 by Arturg04         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_atoi(const char *restrict nptr)
{
	int	res;
	int	neg;

	res = 0;
	neg = 1;
	while (*nptr == ' ')
		nptr++;
	if (*nptr == '-' || *nptr == '+')
	{
		if (*nptr == '-')
			neg = -neg;
		nptr++;
	}
	while (ft_isdigit(*nptr))
	{
		if (res > (INT_MAX / 10)
			|| (res == INT_MAX / 10 && *nptr > '7'))
		{
			if (neg > 0)
				return (INT_MAX);
			return (INT_MIN);
		}
		res = res * 10 + *(nptr++) - '0';
	}
	return (res * neg);
}
