/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Arturg04 <artur.13.goncalves@gmail.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/28 21:54:42 by Arturg04          #+#    #+#             */
/*   Updated: 2023/09/28 21:55:17 by Arturg04         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	*ft_memset(void *restrict src,
						int c,
						unsigned int n)
{
	unsigned char	*restrict	mem;

	mem = (unsigned char *)src;
	while (n-- > 0)
		*mem++ = (unsigned char)c;
	return (src);
}
