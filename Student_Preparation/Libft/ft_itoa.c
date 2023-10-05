/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Arturg04 <artur.13.goncalves@gmail.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/05 18:27:59 by Arturg04          #+#    #+#             */
/*   Updated: 2023/10/05 18:50:27 by Arturg04         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static	int	count(int n)
{
	int	size;

	size = 0;
	while (n != 0)
	{
		size++;
		n /= 10;
	}
	return (size);
}

char	*ft_itoa(int n)
{
	int					neg;
	int					size;
	char	*restrict	str;

	neg = 1;
	if (n == 0)
		return (ft_strdup("0"));
	size = count(n);
	if (n < 0)
	{
		neg = -neg;
		size++;
	}
	str = malloc(size + 1);
	if (!str)
		return (NULL);
	str[size--] = 0;
	while (n != 0)
	{
		str[size--] = n % 10 * neg + 48 ;
		n /= 10;
	}
	if (size == 0)
		str[0] = '-';
	return (str);
}
