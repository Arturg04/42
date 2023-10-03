/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ade-pinh <ade-pinh@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/28 21:54:25 by Arturg04          #+#    #+#             */
/*   Updated: 2023/10/03 21:48:26 by ade-pinh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *restrict dest,
						const void *restrict src,
						size_t n)
{
	unsigned char	*restrict	s;
	unsigned char	*restrict	d;

	if (!dest && !src)
		return ((void *)0);
	s = (unsigned char *)src;
	d = (unsigned char *)dest;
	if (src > dest)
	{
		while (n-- > 0)
			*d++ = *s++;
		return (dest);
	}
	d += n - 1;
	s += n - 1;
	while (n-- > 0)
		*d-- = *s--;
	return (dest);
}
