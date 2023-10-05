/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Arturg04 <artur.13.goncalves@gmail.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/28 21:54:25 by Arturg04          #+#    #+#             */
/*   Updated: 2023/10/05 21:06:38 by Arturg04         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest,
						const void *src,
						size_t n)
{
	unsigned char	*s;
	unsigned char	*d;

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
