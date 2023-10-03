/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Arturg04 <artur.13.goncalves@gmail.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/30 12:05:45 by Arturg04          #+#    #+#             */
/*   Updated: 2023/10/03 16:55:12 by Arturg04         ###   ########.fr       */
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
		if (*nptr++ == '-')
			neg = -neg;
	}
	while (ft_isdigit(*nptr))
	{
		if (res > (FT_INT_MAX / 10)
			|| (res == FT_INT_MAX / 10 && *nptr > '7'))
		{
			if (neg > 0)
				return (FT_INT_MAX);
			return (FT_INT_MIN);
		}
		res = res * 10 + *(nptr++) - '0';
	}
	return (res * neg);
}
