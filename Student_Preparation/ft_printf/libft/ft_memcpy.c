/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ade-pinh <ade-pinh@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/28 21:53:52 by Arturg04          #+#    #+#             */
/*   Updated: 2023/10/06 18:35:06 by ade-pinh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dest,
						void const *src,
						size_t n)
{
	unsigned char	*s;
	unsigned char	*d;

	if (!src && !dest)
		return ((void *)0);
	s = (unsigned char *)src;
	d = (unsigned char *)dest;
	while (n-- > 0)
		*d++ = *s++;
	return (dest);
}
