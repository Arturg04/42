/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ade-pinh <ade-pinh@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/28 23:00:45 by Arturg04          #+#    #+#             */
/*   Updated: 2023/10/03 21:49:56 by ade-pinh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *restrict dst,
					const char *restrict src,
					size_t size)
{
	size_t	i;

	i = 0;
	while (dst[i] && i < size)
		i++;
	while (*src && i + 1 < size)
		dst[i++] = *src++;
	if (i < size)
		dst[i] = 0;
	while (*src++)
		i++;
	return (i);
}
