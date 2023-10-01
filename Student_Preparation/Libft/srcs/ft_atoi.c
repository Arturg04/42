/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Arturg04 <artur.13.goncalves@gmail.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/30 12:05:45 by Arturg04          #+#    #+#             */
/*   Updated: 2023/10/01 16:35:45 by Arturg04         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

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
	while (*nptr >= '0' && *nptr <= '9')
	{
		if (res > (2147483647 / 10)
			|| (res == 2147483647 / 10 && *nptr - '0' > '7'))
		{
			if (neg > 0)
				return (2147483647);
			return (-2147483648);
		}
		res = res * 10 + *(nptr++) - '0';
	}
	return (res * neg);
}
