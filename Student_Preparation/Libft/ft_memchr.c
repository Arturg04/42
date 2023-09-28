/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Arturg04 <artur.13.goncalves@gmail.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/28 21:51:40 by Arturg04          #+#    #+#             */
/*   Updated: 2023/09/28 21:55:33 by Arturg04         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	*memchr(const void *restrict src,
					int c,
					unsigned int n)
{
	unsigned char	*restrict s;

	s = (unsigned char *)src;
	while (n-- > 0)
	{
		if (*s++ == (unsigned char)c)
			return (--s);
	}
	return ((void *)0);
}
