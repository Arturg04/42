/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ade-pinh <ade-pinh@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/28 22:12:31 by Arturg04          #+#    #+#             */
/*   Updated: 2023/10/03 21:48:02 by ade-pinh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *restrict str1,
				const void *restrict str2,
				size_t n)
{
	const unsigned char	*restrict s1;
	const unsigned char	*restrict s2;

	s1 = (const unsigned char *)str1;
	s2 = (const unsigned char *)str2;
	while (n-- > 0)
	{
		if (*s1++ != *s2++)
			return ((int)*(--s1) - (int)*(--s2));
	}
	return (0);
}
