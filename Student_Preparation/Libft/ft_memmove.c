/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Arturg04 <artur.13.goncalves@gmail.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/28 21:54:25 by Arturg04          #+#    #+#             */
/*   Updated: 2023/10/03 16:00:22 by Arturg04         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	*ft_memmove(void *restrict dest,
						const void *restrict src,
						unsigned int n)
{
	unsigned char	*restrict	s;
	unsigned char	*restrict	d;

	s = (unsigned char *)src;
	d = (unsigned char *)dest;
	if (src > dest)
	{
		while (n-- > 0)
			*d++ = *s++;
		return (dest);
	}
	d += n;
	s += n;
	while (n-- > 0)
		*d-- = *s--;
	return (dest);
}
