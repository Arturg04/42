/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ade-pinh <ade-pinh@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/28 21:51:40 by Arturg04          #+#    #+#             */
/*   Updated: 2023/10/06 18:35:03 by ade-pinh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *src,
					int c,
					size_t n)
{
	unsigned char	*s;

	s = (unsigned char *)src;
	while (n-- > 0)
	{
		if (*s++ == (unsigned char)c)
			return (--s);
	}
	return ((void *)0);
}
