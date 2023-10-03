/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ade-pinh <ade-pinh@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/28 21:54:42 by Arturg04          #+#    #+#             */
/*   Updated: 2023/10/03 21:48:46 by ade-pinh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *restrict src,
				int c,
				size_t n)
{
	unsigned char	*restrict	mem;

	mem = (unsigned char *)src;
	while (n-- > 0)
		*mem++ = (unsigned char)c;
	return (src);
}
