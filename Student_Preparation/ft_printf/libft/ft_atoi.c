/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ade-pinh <ade-pinh@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/30 12:05:45 by Arturg04          #+#    #+#             */
/*   Updated: 2023/10/06 18:34:38 by ade-pinh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_atoi(const char *nptr)
{
	int	res;
	int	neg;

	res = 0;
	neg = 1;
	while (*nptr == ' ' || (*nptr > 8 && *nptr < 14))
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
