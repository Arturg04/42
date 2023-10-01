/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Arturg04 <artur.13.goncalves@gmail.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/28 21:47:57 by Arturg04          #+#    #+#             */
/*   Updated: 2023/09/28 21:53:39 by Arturg04         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	*ft_memccpy(void *restrict dest,
						const void *restrict src,
						int c,
						unsigned int n)
{
	unsigned char				a;
	unsigned char	*restrict	d;
	unsigned char	*restrict	s;

	a = (unsigned char)c;
	d = (unsigned char *)dest;
	s = (unsigned char *)src;
	while (n-- > 0)
	{
		*d++ = *s;
		if (*s++ == a)
			return ((void *)(d));
	}
	return ((void *)0);
}
