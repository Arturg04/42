/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ade-pinh <ade-pinh@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/28 21:47:57 by Arturg04          #+#    #+#             */
/*   Updated: 2023/10/06 18:35:02 by ade-pinh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memccpy(void *dest,
						const void *src,
						int c,
						size_t n)
{
	unsigned char	a;
	unsigned char	*d;
	unsigned char	*s;

	a = (unsigned char)c;
	d = (unsigned char *)dest;
	s = (unsigned char *)src;
	while (n-- > 0)
	{
		*d++ = *s;
		if (*s++ == a)
			return ((void *)(--d));
	}
	return ((void *)0);
}
