/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Arturg04 <artur.13.goncalves@gmail.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/28 21:53:52 by Arturg04          #+#    #+#             */
/*   Updated: 2023/09/28 21:54:10 by Arturg04         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	*ft_memcpy(void *restrict dest,
						void const *restrict src,
						unsigned int n)
{
	unsigned char	*restrict	s;
	unsigned char	*restrict	d;

	s = (unsigned char *)src;
	d = (unsigned char *)dest;
	while (n-- > 0)
		*d++ = *s++;
	return (dest);
}
