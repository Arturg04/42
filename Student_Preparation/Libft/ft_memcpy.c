/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ade-pinh <ade-pinh@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/28 21:53:52 by Arturg04          #+#    #+#             */
/*   Updated: 2023/10/03 21:38:23 by ade-pinh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	*ft_memcpy(void *restrict dest,
						void const *restrict src,
						unsigned int n)
{
	unsigned char	*restrict	s;
	unsigned char	*restrict	d;

	if (!src && !dest)
		return ((void *)0);
	s = (unsigned char *)src;
	d = (unsigned char *)dest;
	while (n-- > 0)
		*d++ = *s++;
	return (dest);
}
